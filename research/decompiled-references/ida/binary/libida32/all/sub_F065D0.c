void __fastcall sub_F065D0(__int64 a1, __int64 a2, char a3)
{
  char v3; // r12
  __int64 v4; // rbp
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 *v12; // rcx
  int v13; // eax
  unsigned __int64 v14; // [rsp+0h] [rbp-B8h]
  __int64 *v15; // [rsp+0h] [rbp-B8h]
  __int64 v17; // [rsp+8h] [rbp-B0h]
  __int64 v18; // [rsp+10h] [rbp-A8h]
  __int64 v19; // [rsp+18h] [rbp-A0h]
  void *s1; // [rsp+20h] [rbp-98h] BYREF
  size_t n; // [rsp+28h] [rbp-90h]
  __int64 v22; // [rsp+30h] [rbp-88h] BYREF
  void *s2[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v24; // [rsp+50h] [rbp-68h] BYREF
  void *v25[2]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v26; // [rsp+70h] [rbp-48h] BYREF

  v3 = *(_BYTE *)(a1 + 1104);
  v4 = *(_QWORD *)(a1 + 1096);
  if ( v3 )
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 24LL))(v4, 2, 0, 0);
  v5 = a2 & 7;
  v14 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (a2 & 8) != 0 )
  {
    v5 |= *(__int64 *)((char *)&qword_18 + (a2 & 0xFFFFFFFFFFFFFFF0LL));
    v14 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  }
  v19 = a1 + 1144;
  sub_F54690(&s1, v14, v5, a1 + 1144);
  v6 = sub_971800(*(_QWORD *)(a1 + 1096), "'");
  v7 = sub_22581D0(v6, s1, n);
  sub_971800(v7, "'");
  if ( a3 )
  {
    if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v8 = sub_F47160(a2);
      v17 = v8;
      v10 = v9;
      if ( v5 != v9 || v14 != v8 )
      {
        sub_F54690(s2, v8, v9, v19);
        if ( (void *)n != s2[1]
          || (v12 = (__int64 *)s2[0], n) && (v15 = (__int64 *)s2[0], v13 = memcmp(s1, s2[0], n), v12 = v15, v13) )
        {
          v18 = sub_971800(*(_QWORD *)(a1 + 1096), ":'");
          sub_F54690(v25, v17, v10, v19);
          v11 = sub_22581D0(v18, v25[0], v25[1]);
          sub_971800(v11, "'");
          if ( v25[0] != &v26 )
            operator delete(v25[0]);
          v12 = (__int64 *)s2[0];
        }
        if ( v12 != &v24 )
          operator delete(v12);
      }
    }
  }
  if ( s1 != &v22 )
    operator delete(s1);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
}

