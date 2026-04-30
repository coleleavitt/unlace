void __fastcall sub_50A1A0(int *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r15
  int *v11; // rbx
  char *v12; // r12
  __int64 v13; // rbp
  int v14; // r15d
  int v15; // esi
  char *v16; // rax
  char *v17; // rdx
  int v18; // r13d
  char *v19; // rcx
  size_t v20; // rdx
  char *v21; // rax
  char *v22; // rax
  __int64 v23; // rax
  int v24; // r13d
  __int64 v25; // rdx
  __int64 v26; // rcx
  _DWORD *v27; // rsi
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdi
  int v32; // ecx
  int v33; // eax
  int v34; // esi
  __int64 v35; // rdx
  char *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  char v39; // al
  __int64 v40; // [rsp+8h] [rbp-80h]
  char *v43; // [rsp+20h] [rbp-68h]
  __int64 v44; // [rsp+28h] [rbp-60h]
  void *ptr[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v46; // [rsp+40h] [rbp-48h]
  unsigned __int64 v47; // [rsp+48h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  v6 = *a2;
  if ( *a2 )
  {
    v7 = *(_QWORD *)(v6 + 48);
    v46 = 0;
    *(_OWORD *)ptr = 0;
    sub_4FD710(ptr, v7, a3, a4, a5, a6);
    v10 = *(_QWORD *)(v6 + 32);
    v11 = (int *)ptr[0];
    v12 = (char *)ptr[1];
    v13 = v46;
    v40 = v6 + 16;
    if ( v6 + 16 != v10 )
    {
      do
      {
        v24 = *(_DWORD *)(v10 + 32);
        if ( v11 )
        {
          if ( *v11 > 1 )
            goto LABEL_23;
LABEL_33:
          v29 = ((unsigned __int64)v11 + 31) & 0xFFFFFFFFFFFFFFF0LL;
          if ( *((_QWORD *)v11 + 1) - ((__int64)&v12[-v29] >> 2) == v13 )
          {
            if ( !v13 && (char *)v29 != v12 )
            {
              *((_DWORD *)v12 - 1) = v24;
              v13 = 1;
              v12 -= 4;
              goto LABEL_20;
            }
            goto LABEL_23;
          }
          *(_DWORD *)&v12[4 * v13++] = v24;
          goto LABEL_20;
        }
LABEL_27:
        ptr[0] = v11;
        ptr[1] = v12;
        v46 = v13;
        sub_187120((__int64)ptr, 0, 1, 0, v8, v9);
        v12 = (char *)ptr[1];
        v26 = v46;
        v11 = (int *)ptr[0];
        v27 = (char *)ptr[1] + 4 * v13;
        if ( v46 > v13 )
        {
          v44 = v46;
          v43 = (char *)ptr[1] + 4 * v13;
          memmove(v27 + 1, v27, 4 * (v46 - v13));
          v26 = v44;
          v27 = v43;
        }
        *v27 = v24;
        v13 = v26 + 1;
        if ( v11 )
        {
LABEL_20:
          while ( *v11 <= 1 )
          {
            v23 = std::_Rb_tree_increment(v10);
            v10 = v23;
            if ( v40 == v23 )
              goto LABEL_3;
            v24 = *(_DWORD *)(v23 + 32);
            if ( *v11 <= 1 )
              goto LABEL_33;
LABEL_23:
            if ( *v11 > 1 )
              goto LABEL_27;
            v25 = (__int64)&v12[-(((unsigned __int64)v11 + 31) & 0xFFFFFFFFFFFFFFF0LL)] >> 2;
            if ( *((_QWORD *)v11 + 1) - v13 - v25 > 0 )
            {
              v22 = &v12[4 * v13];
            }
            else
            {
              if ( (__int64)&v12[-(((unsigned __int64)v11 + 31) & 0xFFFFFFFFFFFFFFF0LL)] <= 0
                || 3 * v13 >= 2LL * *((_QWORD *)v11 + 1) )
              {
                goto LABEL_27;
              }
              v19 = &v12[-4 * v25];
              v20 = 4 * v13;
              if ( v13 && v12 != v19 && v12 && v19 )
              {
                v21 = (char *)memmove(v19, v12, v20);
                v20 = 4 * v13;
                v19 = v21;
              }
              v22 = &v19[v20];
              v12 = v19;
            }
            *(_DWORD *)v22 = v24;
            ++v13;
          }
        }
        ptr[0] = v11;
        ptr[1] = v12;
        v46 = v13;
        sub_187120((__int64)ptr, 0, 0, 0, v8, v9);
        v11 = (int *)ptr[0];
        v12 = (char *)ptr[1];
        v28 = std::_Rb_tree_increment(v10);
        v13 = v46;
        v10 = v28;
      }
      while ( v40 != v28 );
    }
LABEL_3:
    v14 = 0;
    if ( *a2 )
      v14 = *(_DWORD *)(*a2 + 48);
    v15 = *a1;
    if ( v13 > 0 )
    {
      v16 = v12;
      while ( 1 )
      {
        v17 = v16;
        if ( &v12[4 * v13] == v16 )
          break;
        v16 += 4;
        if ( v15 == *((_DWORD *)v16 - 1) )
        {
          v30 = v17 - v12;
          v31 = v30 >> 2;
          if ( v30 == -4 )
            break;
          v32 = a1[2];
          a1[6] = v31;
          v33 = v31 + 1;
          v34 = v32 + v15;
          if ( (int)v31 + 1 >= v14 )
          {
            v18 = 1;
          }
          else
          {
            v35 = v33;
            v18 = 1;
            v36 = &v12[4 * v33];
            v37 = (__int64)&v12[4 * (unsigned int)(v14 - 2 - v31) + 4 + 4 * v35];
            do
            {
              if ( *(_DWORD *)v36 >= v34 )
                break;
              v36 += 4;
              ++v18;
            }
            while ( v36 != (char *)v37 );
          }
          if ( !v32 )
          {
            v38 = sub_508440(*((_BYTE *)a1 + 16));
            if ( v38 )
            {
              v18 = (*(__int64 (__fastcall **)(__int64, int *, __int64 *))(*(_QWORD *)v38 + 56LL))(v38, a1, a2);
            }
            else
            {
              v39 = *((_BYTE *)a1 + 16);
              if ( v39 == 116 || v39 == 69 )
                v18 = v14 - a1[6] - 1;
            }
          }
          goto LABEL_10;
        }
      }
    }
    v18 = 0;
    a1[6] = 0;
LABEL_10:
    a1[7] = v18;
    if ( v11 )
    {
      if ( !_InterlockedSub(v11, 1u) )
        free(v11);
    }
  }
  else
  {
    *((_QWORD *)a1 + 3) = 0;
  }
}
