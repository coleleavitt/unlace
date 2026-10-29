__int64 __fastcall sub_14E34C0(__int64 a1)
{
  unsigned int v1; // r12d
  _QWORD *v2; // rax
  __int64 v3; // r13
  int v4; // eax
  __int64 v5; // rax
  void **v6; // rbp
  unsigned __int64 v7; // rax
  void **v8; // r12
  void **v9; // rbx
  void **v10; // rdi
  void **v11; // rdi
  void **v12; // rbx
  void **v13; // r12
  __int64 v15; // rdx
  __m128i v16; // [rsp+0h] [rbp-98h] BYREF
  __int64 v17; // [rsp+10h] [rbp-88h]
  void *v18; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-70h]
  __int64 v20; // [rsp+30h] [rbp-68h]
  void *v21; // [rsp+40h] [rbp-58h]
  __int64 v22; // [rsp+50h] [rbp-48h] BYREF
  __int16 v23; // [rsp+60h] [rbp-38h]

  LODWORD(v18) = 13;
  if ( sub_14E3360(a1, &v18, 1) )
  {
    sub_13DF9D0(&v16, a1 + 24);
    *(__m128i *)(a1 + 88) = _mm_loadu_si128(&v16);
    *(_QWORD *)(a1 + 104) = v17;
  }
  v1 = *(_DWORD *)(a1 + 88);
  LODWORD(v18) = 2;
  if ( sub_14E3360(a1, &v18, 1) )
  {
    sub_13DF9D0(&v16, a1 + 24);
    *(__m128i *)(a1 + 88) = _mm_loadu_si128(&v16);
    *(_QWORD *)(a1 + 104) = v17;
    return sub_14E15D0(a1);
  }
  else
  {
    v2 = *(_QWORD **)(a1 + 80);
    v3 = v2[6];
    v4 = sub_C07A10(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 92), v2[11], v2[7], v2[8], nullptr, nullptr);
    sub_FC70B0((__int64)&v18, v3, v4, 15);
    v5 = sub_14DC730(&v18, v1);
    sub_14DC730(v5, 2);
    if ( (_BYTE)v23 )
    {
      sub_FC7790(v20, (__int64 *)&v18, SHIBYTE(v23));
      v20 = 0;
      v23 = 0;
    }
    if ( v21 != &v22 )
      operator delete(v21);
    v6 = (void **)v18;
    if ( v18 )
    {
      v7 = v19;
      if ( v19 )
      {
        if ( (unsigned __int64)v18 >= v19 && (unsigned __int64)v18 <= v19 + 14848 )
        {
          v15 = *(unsigned int *)(v19 + 14976);
          *(_DWORD *)(v19 + 14976) = v15 + 1;
          *(_QWORD *)(v7 + 8 * v15 + 14848) = v6;
        }
        else
        {
          v8 = *((void ***)v18 + 66);
          v9 = &v8[8 * (unsigned __int64)*((unsigned int *)v18 + 134)];
          if ( v8 != v9 )
          {
            do
            {
              while ( 1 )
              {
                v9 -= 8;
                v10 = (void **)v9[3];
                if ( v10 == v9 + 5 )
                  break;
                operator delete(v10);
                if ( v8 == v9 )
                  goto LABEL_15;
              }
            }
            while ( v8 != v9 );
LABEL_15:
            v9 = (void **)v6[66];
          }
          if ( v9 != v6 + 68 )
            free(v9);
          v11 = (void **)v6[52];
          v12 = v6 + 52;
          if ( v11 != v6 + 54 )
            free(v11);
          v13 = v6 + 12;
          do
          {
            while ( 1 )
            {
              v12 -= 4;
              if ( *v12 == v12 + 2 )
                break;
              operator delete(*v12);
              if ( v12 == v13 )
                goto LABEL_23;
            }
          }
          while ( v12 != v13 );
LABEL_23:
          operator delete(v6, 0x3A0u);
        }
      }
    }
    return 0;
  }
}
