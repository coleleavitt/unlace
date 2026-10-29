__int64 __fastcall sub_398660(__int64 a1, __int64 a2, const void **a3, __int64 a4, __int64 a5)
{
  size_t v5; // rbx
  unsigned __int64 v8; // rbx
  const char *v9; // rsi
  const char *v10; // rdi
  char v11; // bl
  __int64 v12; // rdx
  unsigned int v13; // ebx
  int v14; // ebx
  int v15; // eax
  const void *v17; // r12
  void *v18; // rdi
  __int64 v19; // rax
  void *v20; // rax
  const void *v21; // rsi
  __int64 v22; // rax
  signed __int64 v23; // rbp
  const char *v24; // rax
  int i; // ebx
  char v26; // al
  __int64 v27; // rdi
  unsigned __int64 v28; // r8
  char *v29; // rax
  unsigned __int64 v30; // [rsp+0h] [rbp-138h]
  const char *v31; // [rsp+8h] [rbp-130h]
  unsigned __int64 v32; // [rsp+10h] [rbp-128h]
  char v34; // [rsp+28h] [rbp-110h]
  char v35; // [rsp+2Fh] [rbp-109h]
  __int64 v36; // [rsp+38h] [rbp-100h] BYREF
  void *dest; // [rsp+40h] [rbp-F8h] BYREF
  __int128 v38; // [rsp+48h] [rbp-F0h]
  __m128i v39; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v40; // [rsp+70h] [rbp-C8h]
  __int128 v41; // [rsp+78h] [rbp-C0h]
  __int64 v42; // [rsp+88h] [rbp-B0h]
  __int128 v43; // [rsp+90h] [rbp-A8h]
  __int128 v44; // [rsp+A0h] [rbp-98h]
  __int64 v45; // [rsp+D0h] [rbp-68h]
  int v46; // [rsp+D8h] [rbp-60h]
  __int64 v47; // [rsp+E0h] [rbp-58h]
  char v48; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v49; // [rsp+F8h] [rbp-40h]

  v34 = a4;
  v49 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 26) & 2) != 0 )
  {
    v13 = 0;
    sub_2B4E70((__int64)"AUTOHIDE NONE\nCannot rename register variables");
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 40);
    dest = nullptr;
    v38 = 0;
    if ( v5 )
    {
      v20 = (void *)qalloc_or_throw(v5, a2, (__int64)a3, a4);
      v21 = *(const void **)(a2 + 32);
      *((_QWORD *)&v38 + 1) = v5;
      dest = v20;
      memcpy(v20, v21, v5);
      *(_QWORD *)&v38 = v5;
    }
    if ( !a3 )
    {
      v35 = 0;
      goto LABEL_23;
    }
    v8 = (unsigned __int64)a3[1];
    if ( v8 > 1 )
    {
      v17 = *a3;
      v18 = dest;
      if ( *((_QWORD *)&v38 + 1) < v8 )
      {
        dest = (void *)qvector_reserve((__int64)&dest, (__int64)dest, (__int64)a3[1], 1);
        v18 = dest;
      }
      *(_QWORD *)&v38 = v8;
      memmove(v18, v17, v8 - 1);
      v35 = 0;
      *((char *)dest + v8 - 1) = 0;
      goto LABEL_24;
    }
    *(_QWORD *)&v38 = 0;
    v35 = 0;
LABEL_7:
    if ( *(_QWORD *)(a2 + 40) )
    {
      v32 = 0;
      v9 = s1;
LABEL_9:
      v10 = *(const char **)(a2 + 32);
      while ( strcmp(v10, v9) )
      {
        v31 = (const char *)dest;
        if ( v32 > 1 && sub_213140(*(_QWORD *)(a1 + 24), (const char *)dest, -9) )
        {
          v15 = sub_33D190(
                  1u,
                  (__int64)"AUTOHIDE REGISTRY\n"
                           "Sorry, name '%s' is already present in the database.\n"
                           "Do you want to add a numerical suffix to it?",
                  v31);
          if ( !v15 )
          {
            if ( a3 )
            {
              sub_2B4E70((__int64)"AUTOHIDE NONE\nSorry, cannot rename the variable as '%s'", v31);
              break;
            }
            goto LABEL_23;
          }
          if ( v15 == -1 )
            break;
          v23 = v38 - 1;
          if ( !(_QWORD)v38 )
            v23 = 0;
          v24 = (char *)dest + v38;
          if ( v31 < (char *)dest + (unsigned __int64)v38 )
          {
            while ( (unsigned __int8)(*(v24 - 1) - 48) <= 9u )
            {
              if ( v31 == --v24 )
                goto LABEL_64;
            }
            if ( v31 < v24 && *(v24 - 1) == 95 )
              v23 = v24 - 1 - v31;
          }
LABEL_64:
          v31 = (const char *)dest;
          for ( i = 1; i != 1000; ++i )
          {
            if ( v23 )
            {
              v27 = v38;
              v28 = v23 + 1;
              if ( (unsigned __int64)v38 < v23 + 1 )
              {
                if ( *((_QWORD *)&v38 + 1) < v28 )
                {
                  v29 = (char *)qvector_reserve((__int64)&dest, (__int64)v31, v23 + 1, 1);
                  v27 = v38;
                  v28 = v23 + 1;
                  v31 = v29;
                  dest = v29;
                }
                v30 = v28;
                memset((void *)&v31[v27], 0, v28 - v27);
                *(_QWORD *)&v38 = v30;
                v31 = (const char *)dest;
              }
              else if ( v28 != (_QWORD)v38 )
              {
                *(_QWORD *)&v38 = v23 + 1;
              }
              v31[v23] = 0;
            }
            else if ( v31 )
            {
              *(_QWORD *)&v38 = 0;
              qfree((__int64)v31);
              dest = nullptr;
              *((_QWORD *)&v38 + 1) = 0;
            }
            sub_FAAD0((__int64 *)&dest);
            v26 = sub_213140(*(_QWORD *)(a1 + 24), (const char *)dest, -9);
            v31 = (const char *)dest;
            if ( !v26 )
              break;
          }
        }
        v36 = 0;
        v40 = 0;
        v42 = 0;
        v45 = 1;
        v46 = -1;
        v47 = 0;
        v48 = 0;
        v39 = 0;
        v41 = 0;
        v43 = 0;
        v44 = 0;
        v11 = sub_38B550(a1, (int *)a2, 0.0);
        if ( v11 && *(_DWORD *)a2 == 1 )
        {
          v12 = *(_QWORD *)(a2 + 8);
          if ( v12 >= 0 && sub_1D0250(*(_QWORD **)(a1 + 24), &v39, v12, nullptr, &v36) != -1 )
          {
            if ( v35 || (v22 = *(_QWORD *)(a1 + 32)) == 0 )
            {
              if ( v32 <= 1 )
                goto LABEL_50;
            }
            else
            {
              *(_DWORD *)(v22 + 108) |= 8u;
              if ( v32 <= 1 )
              {
LABEL_50:
                get_tinfo_property4();
                get_func();
                build_stkvar_name();
                v31 = (const char *)dest;
              }
            }
            set_tinfo_property4();
            v35 = v11;
            goto LABEL_16;
          }
          if ( v32 <= 1 )
            goto LABEL_28;
        }
        else if ( v32 <= 1 )
        {
LABEL_28:
          if ( (*(_BYTE *)(a2 + 25) & 1) == 0 )
            sub_1F0D70((int *)a2, *(_QWORD **)(*(_QWORD *)(a1 + 24) + 1504LL));
          v14 = 1;
          while ( 1 )
          {
            sub_6B870((__int64 *)&dest);
            if ( !sub_213140(*(_QWORD *)(a1 + 24), (const char *)dest, -9) )
              break;
            if ( ++v14 == 100 )
              goto LABEL_16;
          }
          v31 = (const char *)dest;
        }
LABEL_16:
        v13 = sub_397570(a1, a2, v31, v32 > 1, v34, 0.0);
        if ( (_BYTE)v13 || (sub_2B4E70((__int64)"AUTOHIDE NONE\nSorry, cannot rename the variable as '%s'", v31), a3) )
        {
          clear_tinfo_t();
          if ( v42 )
          {
            *(_QWORD *)&v43 = 0;
            qfree(v42);
          }
          if ( v40 )
          {
            *(_QWORD *)&v41 = 0;
            qfree(v40);
          }
          clear_tinfo_t();
          if ( !v35 )
            goto LABEL_40;
          goto LABEL_51;
        }
        clear_tinfo_t();
        if ( v42 )
        {
          *(_QWORD *)&v43 = 0;
          qfree(v42);
        }
        if ( v40 )
        {
          *(_QWORD *)&v41 = 0;
          qfree(v40);
        }
        clear_tinfo_t();
LABEL_23:
        v13 = sub_387F90((__int64)&dest, (__int64)"Please enter variable name");
        if ( !(_BYTE)v13 )
          goto LABEL_39;
LABEL_24:
        a4 = v38;
        v32 = v38;
        if ( !(_QWORD)v38 )
          goto LABEL_7;
        v9 = (const char *)dest;
        v10 = s1;
        if ( *(_QWORD *)(a2 + 40) )
          goto LABEL_9;
      }
    }
    v13 = 0;
LABEL_39:
    if ( v35 )
    {
LABEL_51:
      v19 = *(_QWORD *)(a1 + 32);
      if ( v19 )
      {
        *(_DWORD *)(v19 + 108) &= ~8u;
        if ( (*(_BYTE *)a1 & 2) == 0 )
          sub_395A90(a1, 0, 0.0, (__int64)a3, a4, a5);
      }
    }
LABEL_40:
    if ( dest )
    {
      *(_QWORD *)&v38 = 0;
      qfree((__int64)dest);
    }
  }
  return v13;
}
