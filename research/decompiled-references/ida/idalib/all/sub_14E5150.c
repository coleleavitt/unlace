__int64 __fastcall sub_14E5150(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  _QWORD *v6; // rax
  __int64 v7; // r15
  int v8; // eax
  void **v9; // rbp
  unsigned __int64 v10; // rax
  void **v11; // r12
  void **v12; // rbx
  void **v13; // rdi
  void **v14; // rdi
  void **v15; // rbx
  void **v16; // r12
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __m128i v21; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+10h] [rbp-98h]
  void *v23; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-80h]
  __int64 v25; // [rsp+30h] [rbp-78h]
  void *v26; // [rsp+40h] [rbp-68h]
  __int64 v27; // [rsp+50h] [rbp-58h] BYREF
  __int16 v28; // [rsp+60h] [rbp-48h]

  LODWORD(v23) = a2;
  if ( sub_14E3360(a1, &v23, 1) )
  {
    sub_13DF9D0(&v21, a1 + 24);
    *(__m128i *)(a1 + 88) = _mm_loadu_si128(&v21);
    *(_QWORD *)(a1 + 104) = v22;
    return 0;
  }
  else
  {
    v6 = *(_QWORD **)(a1 + 80);
    v7 = v6[6];
    v8 = sub_C07A10(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 92), v6[11], v6[7], v6[8], nullptr, nullptr);
    sub_FC70B0((__int64)&v23, v7, v8, a3);
    switch ( a3 )
    {
      case 15:
        v19 = sub_14DC730(&v23, a4);
        sub_14DC730(v19, a2);
        break;
      case 17:
        v18 = sub_14DC730(&v23, a2);
        sub_14DC730(v18, a4);
        break;
      case 14:
        sub_14DC730(&v23, a2);
        break;
    }
    if ( (_BYTE)v28 )
    {
      sub_FC7790(v25, (__int64 *)&v23, SHIBYTE(v28));
      v25 = 0;
      v28 = 0;
    }
    if ( v26 != &v27 )
      operator delete(v26);
    v9 = (void **)v23;
    if ( v23 )
    {
      v10 = v24;
      if ( v24 )
      {
        if ( (unsigned __int64)v23 >= v24 && (unsigned __int64)v23 <= v24 + 14848 )
        {
          v20 = *(unsigned int *)(v24 + 14976);
          *(_DWORD *)(v24 + 14976) = v20 + 1;
          *(_QWORD *)(v10 + 8 * v20 + 14848) = v9;
        }
        else
        {
          v11 = *((void ***)v23 + 66);
          v12 = &v11[8 * (unsigned __int64)*((unsigned int *)v23 + 134)];
          if ( v11 != v12 )
          {
            do
            {
              while ( 1 )
              {
                v12 -= 8;
                v13 = (void **)v12[3];
                if ( v13 == v12 + 5 )
                  break;
                operator delete(v13);
                if ( v11 == v12 )
                  goto LABEL_17;
              }
            }
            while ( v11 != v12 );
LABEL_17:
            v12 = (void **)v9[66];
          }
          if ( v12 != v9 + 68 )
            free(v12);
          v14 = (void **)v9[52];
          v15 = v9 + 52;
          if ( v14 != v9 + 54 )
            free(v14);
          v16 = v9 + 12;
          do
          {
            while ( 1 )
            {
              v15 -= 4;
              if ( *v15 == v15 + 2 )
                break;
              operator delete(*v15);
              if ( v15 == v16 )
                goto LABEL_25;
            }
          }
          while ( v15 != v16 );
LABEL_25:
          operator delete(v9, 0x3A0u);
        }
      }
    }
    return 1;
  }
}
