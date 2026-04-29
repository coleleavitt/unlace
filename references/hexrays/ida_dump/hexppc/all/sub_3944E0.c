__int64 __fastcall sub_3944E0(__int64 a1, __int64 a2, const void **a3, __int64 a4, __int64 a5)
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
  __int64 v17; // r12
  const void *v18; // r12
  void *v19; // rdi
  __int64 tinfo_property4; // rax
  __int64 func; // rax
  __int64 v22; // rax
  void *v23; // rax
  const void *v24; // rsi
  __int64 v25; // rax
  signed __int64 v26; // rbp
  const char *v27; // rax
  int i; // ebx
  char v29; // al
  __int64 v30; // rdi
  unsigned __int64 v31; // r8
  char *v32; // rax
  unsigned int v33; // [rsp+0h] [rbp-138h]
  unsigned __int64 v34; // [rsp+0h] [rbp-138h]
  const char *v35; // [rsp+8h] [rbp-130h]
  unsigned __int64 v36; // [rsp+10h] [rbp-128h]
  char v38; // [rsp+28h] [rbp-110h]
  char v39; // [rsp+2Fh] [rbp-109h]
  __int64 v40; // [rsp+38h] [rbp-100h] BYREF
  void *dest; // [rsp+40h] [rbp-F8h] BYREF
  __int128 v42; // [rsp+48h] [rbp-F0h]
  __m128i v43; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v44; // [rsp+70h] [rbp-C8h]
  __int128 v45; // [rsp+78h] [rbp-C0h]
  __int64 v46; // [rsp+88h] [rbp-B0h]
  __int128 v47; // [rsp+90h] [rbp-A8h]
  _OWORD v48[3]; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v49; // [rsp+D0h] [rbp-68h]
  int v50; // [rsp+D8h] [rbp-60h]
  __int64 v51; // [rsp+E0h] [rbp-58h]
  char v52; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v53; // [rsp+F8h] [rbp-40h]

  v38 = a4;
  v53 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 26) & 2) != 0 )
  {
    v13 = 0;
    sub_2B11F0((__int64)"AUTOHIDE NONE\nCannot rename register variables");
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 40);
    dest = nullptr;
    v42 = 0;
    if ( v5 )
    {
      v23 = (void *)qalloc_or_throw(v5);
      v24 = *(const void **)(a2 + 32);
      *((_QWORD *)&v42 + 1) = v5;
      dest = v23;
      memcpy(v23, v24, v5);
      *(_QWORD *)&v42 = v5;
    }
    if ( !a3 )
    {
      v39 = 0;
      goto LABEL_23;
    }
    v8 = (unsigned __int64)a3[1];
    if ( v8 > 1 )
    {
      v18 = *a3;
      v19 = dest;
      if ( *((_QWORD *)&v42 + 1) < v8 )
      {
        dest = (void *)qvector_reserve(&dest, dest, a3[1], 1);
        v19 = dest;
      }
      *(_QWORD *)&v42 = v8;
      memmove(v19, v18, v8 - 1);
      v39 = 0;
      *((char *)dest + v8 - 1) = 0;
      goto LABEL_24;
    }
    *(_QWORD *)&v42 = 0;
    v39 = 0;
LABEL_7:
    if ( *(_QWORD *)(a2 + 40) )
    {
      v36 = 0;
      v9 = s1;
LABEL_9:
      v10 = *(const char **)(a2 + 32);
      while ( strcmp(v10, v9) )
      {
        v35 = (const char *)dest;
        if ( v36 > 1 && sub_20F4C0(*(_QWORD *)(a1 + 24), (const char *)dest, -9) )
        {
          v15 = sub_338F10(
                  1u,
                  (__int64)"AUTOHIDE REGISTRY\n"
                           "Sorry, name '%s' is already present in the database.\n"
                           "Do you want to add a numerical suffix to it?",
                  v35);
          if ( !v15 )
          {
            if ( a3 )
            {
              sub_2B11F0((__int64)"AUTOHIDE NONE\nSorry, cannot rename the variable as '%s'", v35);
              break;
            }
            goto LABEL_23;
          }
          if ( v15 == -1 )
            break;
          v26 = v42 - 1;
          if ( !(_QWORD)v42 )
            v26 = 0;
          v27 = (char *)dest + v42;
          if ( v35 < (char *)dest + (unsigned __int64)v42 )
          {
            while ( (unsigned __int8)(*(v27 - 1) - 48) <= 9u )
            {
              if ( v35 == --v27 )
                goto LABEL_67;
            }
            if ( v35 < v27 && *(v27 - 1) == 95 )
              v26 = v27 - 1 - v35;
          }
LABEL_67:
          v35 = (const char *)dest;
          for ( i = 1; i != 1000; ++i )
          {
            if ( v26 )
            {
              v30 = v42;
              v31 = v26 + 1;
              if ( (unsigned __int64)v42 < v26 + 1 )
              {
                if ( *((_QWORD *)&v42 + 1) < v31 )
                {
                  v32 = (char *)qvector_reserve(&dest, v35, v26 + 1, 1);
                  v30 = v42;
                  v31 = v26 + 1;
                  v35 = v32;
                  dest = v32;
                }
                v34 = v31;
                memset((void *)&v35[v30], 0, v31 - v30);
                *(_QWORD *)&v42 = v34;
                v35 = (const char *)dest;
              }
              else if ( v31 != (_QWORD)v42 )
              {
                *(_QWORD *)&v42 = v26 + 1;
              }
              v35[v26] = 0;
            }
            else if ( v35 )
            {
              *(_QWORD *)&v42 = 0;
              qfree(v35);
              dest = nullptr;
              *((_QWORD *)&v42 + 1) = 0;
            }
            sub_F7090((__int64 *)&dest, (__int64)"_%d", i);
            v29 = sub_20F4C0(*(_QWORD *)(a1 + 24), (const char *)dest, -9);
            v35 = (const char *)dest;
            if ( !v29 )
              break;
          }
        }
        v40 = 0;
        v44 = 0;
        v46 = 0;
        v49 = 1;
        v50 = -1;
        v51 = 0;
        v52 = 0;
        v43 = 0;
        v45 = 0;
        v47 = 0;
        v48[0] = 0;
        v11 = sub_3873D0(a1, (int *)a2, 0.0);
        if ( v11 && *(_DWORD *)a2 == 1 )
        {
          v12 = *(_QWORD *)(a2 + 8);
          if ( v12 >= 0 )
          {
            v17 = sub_1CC810(*(_QWORD **)(a1 + 24), &v43, v12, nullptr, &v40);
            if ( v17 != -1 )
            {
              if ( v39 || (v25 = *(_QWORD *)(a1 + 32)) == 0 )
              {
                if ( v36 <= 1 )
                  goto LABEL_53;
              }
              else
              {
                *(_DWORD *)(v25 + 108) |= 8u;
                if ( v36 <= 1 )
                {
LABEL_53:
                  tinfo_property4 = get_tinfo_property4(v40, 300, 0, 0, 0, 0);
                  func = get_func(tinfo_property4);
                  build_stkvar_name(&dest, func, (unsigned __int64)v43.m128i_i64[0] >> 3);
                  v35 = (const char *)dest;
                  set_tinfo_property4(&v40, 11, v17, dest, 0, 0);
                  goto LABEL_47;
                }
              }
              set_tinfo_property4(&v40, 11, v17, v35, 0, 0);
LABEL_47:
              v39 = v11;
              goto LABEL_16;
            }
          }
          if ( v36 <= 1 )
            goto LABEL_28;
        }
        else if ( v36 <= 1 )
        {
LABEL_28:
          if ( (*(_BYTE *)(a2 + 25) & 1) != 0
            || (unsigned __int8)sub_1ED0F0((int *)a2, *(_QWORD **)(*(_QWORD *)(a1 + 24) + 1504LL)) )
          {
            v33 = 97;
          }
          else
          {
            v33 = 118;
          }
          v14 = 1;
          while ( 1 )
          {
            sub_67E30((__int64 *)&dest, (__int64)"%c%d", v33, v14);
            if ( !sub_20F4C0(*(_QWORD *)(a1 + 24), (const char *)dest, -9) )
              break;
            if ( ++v14 == 100 )
              goto LABEL_16;
          }
          v35 = (const char *)dest;
        }
LABEL_16:
        v13 = sub_3933F0(a1, a2, v35, v36 > 1, v38, 0.0);
        if ( (_BYTE)v13 || (sub_2B11F0((__int64)"AUTOHIDE NONE\nSorry, cannot rename the variable as '%s'", v35), a3) )
        {
          clear_tinfo_t(v48);
          if ( v46 )
          {
            *(_QWORD *)&v47 = 0;
            qfree(v46);
          }
          if ( v44 )
          {
            *(_QWORD *)&v45 = 0;
            qfree(v44);
          }
          clear_tinfo_t(&v40);
          if ( !v39 )
            goto LABEL_40;
          goto LABEL_54;
        }
        clear_tinfo_t(v48);
        if ( v46 )
        {
          *(_QWORD *)&v47 = 0;
          qfree(v46);
        }
        if ( v44 )
        {
          *(_QWORD *)&v45 = 0;
          qfree(v44);
        }
        clear_tinfo_t(&v40);
LABEL_23:
        v13 = sub_383E10((__int64)&dest, (__int64)"Please enter variable name");
        if ( !(_BYTE)v13 )
          goto LABEL_39;
LABEL_24:
        a4 = v42;
        v36 = v42;
        if ( !(_QWORD)v42 )
          goto LABEL_7;
        v9 = (const char *)dest;
        v10 = s1;
        if ( *(_QWORD *)(a2 + 40) )
          goto LABEL_9;
      }
    }
    v13 = 0;
LABEL_39:
    if ( v39 )
    {
LABEL_54:
      v22 = *(_QWORD *)(a1 + 32);
      if ( v22 )
      {
        *(_DWORD *)(v22 + 108) &= ~8u;
        if ( (*(_BYTE *)a1 & 2) == 0 )
          sub_391910(a1, 0, 0.0, (__int64)a3, a4, a5);
      }
    }
LABEL_40:
    if ( dest )
    {
      *(_QWORD *)&v42 = 0;
      qfree(dest);
    }
  }
  return v13;
}
