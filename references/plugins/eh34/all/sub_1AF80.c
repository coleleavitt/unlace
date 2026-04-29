__int64 __fastcall sub_1AF80(__int64 a1, __int64 a2)
{
  void (__fastcall *hexdsp)(__int64, __int64 (__fastcall ***)(), __int64, _QWORD); // rax
  _DWORD *v3; // rsi
  int v4; // r14d
  int v5; // ecx
  __int64 *v6; // rdx
  _DWORD **v7; // rax
  _DWORD **i; // rdi
  _DWORD *v9; // rdx
  int v10; // eax
  _QWORD *v11; // rbx
  unsigned int v12; // r14d
  void *v13; // rdi
  _QWORD *v14; // rbx
  _QWORD *v15; // r12
  __int64 v16; // rdi
  __int64 **v18; // r10
  __int64 *v19; // rax
  int v20; // edi
  __int64 (__fastcall **v21)(); // [rsp+0h] [rbp-F8h] BYREF
  int v22; // [rsp+8h] [rbp-F0h]
  __int64 v23; // [rsp+10h] [rbp-E8h]
  __int128 v24; // [rsp+18h] [rbp-E0h]
  __int64 v25; // [rsp+28h] [rbp-D0h]
  __int128 v26; // [rsp+30h] [rbp-C8h]
  __int64 v27; // [rsp+40h] [rbp-B8h]
  __int128 v28; // [rsp+48h] [rbp-B0h]
  void *v29; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v30; // [rsp+60h] [rbp-98h]
  void *v31; // [rsp+68h] [rbp-90h]
  __int64 v32; // [rsp+70h] [rbp-88h]
  int v33; // [rsp+78h] [rbp-80h]
  __int64 v34; // [rsp+80h] [rbp-78h]
  __int64 v35; // [rsp+88h] [rbp-70h] BYREF
  void *s; // [rsp+90h] [rbp-68h]
  __int64 v37; // [rsp+98h] [rbp-60h]
  void *v38; // [rsp+A0h] [rbp-58h]
  __int64 v39; // [rsp+A8h] [rbp-50h]
  int v40; // [rsp+B0h] [rbp-48h]
  __int64 v41; // [rsp+B8h] [rbp-40h]
  _QWORD v42[7]; // [rsp+C0h] [rbp-38h] BYREF

  v42[1] = __readfsqword(0x28u);
  v24 = 0;
  v26 = 0;
  v28 = 0;
  v22 = 2;
  v23 = 0;
  v25 = 0;
  v27 = 0;
  v21 = off_8BED0;
  v29 = &v35;
  v30 = 1;
  v31 = nullptr;
  v32 = 0;
  v34 = 0;
  v35 = 0;
  s = v42;
  v37 = 1;
  v33 = 1065353216;
  v38 = nullptr;
  v39 = 0;
  v41 = 0;
  v42[0] = 0;
  v40 = 1065353216;
  hexdsp = (void (__fastcall *)(__int64, __int64 (__fastcall ***)(), __int64, _QWORD))get_hexdsp(a1, a2);
  hexdsp(455, &v21, a1 + 16, 0);
  v3 = v38;
  v4 = 0;
  if ( v38 )
  {
    do
    {
      v5 = v3[2];
      if ( v32 )
      {
        v18 = *((__int64 ***)v29 + v5 % v30);
        if ( v18 )
        {
          v19 = *v18;
          if ( *((_DWORD *)*v18 + 2) != v5 )
          {
            while ( *v19 )
            {
              v20 = *(_DWORD *)(*v19 + 8);
              v18 = (__int64 **)v19;
              if ( v5 % v30 != v20 % v30 )
                break;
              v19 = (__int64 *)*v19;
              if ( v20 == v5 )
                goto LABEL_33;
            }
            goto LABEL_10;
          }
LABEL_33:
          if ( v18 )
          {
            v6 = *v18;
            if ( *v18 )
              goto LABEL_7;
          }
        }
      }
      else
      {
        v6 = (__int64 *)v31;
        if ( v31 )
        {
          while ( v5 != *((_DWORD *)v6 + 2) )
          {
            v6 = (__int64 *)*v6;
            if ( !v6 )
              goto LABEL_10;
          }
LABEL_7:
          v7 = (_DWORD **)v6[2];
          for ( i = &v7[v6[3]]; i != v7; *v9 = v3[3] )
            v9 = *v7++;
          ++v4;
        }
      }
LABEL_10:
      v3 = *(_DWORD **)v3;
    }
    while ( v3 );
  }
  v10 = sub_1AC70((__int64)&v21, (__int64)v3);
  v11 = v38;
  v21 = off_8BED0;
  v12 = v10 + v4;
  if ( v38 )
  {
    do
    {
      v13 = v11;
      v11 = (_QWORD *)*v11;
      operator delete(v13, 0x10u);
    }
    while ( v11 );
  }
  memset(s, 0, 8 * v37);
  v39 = 0;
  v38 = nullptr;
  if ( s != v42 )
    operator delete(s, 8 * v37);
  v14 = v31;
  if ( v31 )
  {
    do
    {
      v15 = v14;
      v14 = (_QWORD *)*v14;
      v16 = v15[2];
      if ( v16 )
      {
        v15[3] = 0;
        qfree(v16);
      }
      operator delete(v15, 0x28u);
    }
    while ( v14 );
  }
  memset(v29, 0, 8 * v30);
  v32 = 0;
  v31 = nullptr;
  if ( v29 != &v35 )
    operator delete(v29, 8 * v30);
  v21 = (__int64 (__fastcall **)())&off_8BE50;
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27);
  }
  v21 = off_8BD90;
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25);
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23);
  }
  return v12;
}
