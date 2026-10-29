__int64 __fastcall sub_145B0(__int64 a1, unsigned __int64 a2, int a3, const char *a4)
{
  int v6; // eax
  __int64 v7; // rbx
  unsigned int v8; // ecx
  __int64 v9; // rdi
  int v10; // edx
  __int64 v11; // r15
  const char *v12; // r9
  unsigned __int64 v13; // rbx
  __int64 v14; // rbp
  unsigned __int64 v17; // [rsp+8h] [rbp-70h] BYREF
  unsigned int v18; // [rsp+1Ch] [rbp-5Ch] BYREF
  const char *v19; // [rsp+20h] [rbp-58h] BYREF
  __int128 v20; // [rsp+28h] [rbp-50h]
  unsigned __int64 v21; // [rsp+38h] [rbp-40h]

  v17 = a2;
  v21 = __readfsqword(0x28u);
  v19 = (const char *)a2;
  if ( !sub_7BA0((int *)&v18, (__int64 *)&v19, 0) )
    return -1;
  v6 = sub_5F10(a2, (int)v19);
  v7 = v6;
  if ( v6 <= 0 )
    return -1;
  v8 = v18;
  if ( a3 )
    v8 = dword_28410 + v18;
  v9 = *(_QWORD *)(a1 + 8);
  v10 = *(_DWORD *)a1;
  dword_28410 = v8;
  v19 = nullptr;
  v20 = 0;
  sub_89A0(v9, (__int64 *)&v19, v10, v8);
  v11 = (__int64)v19;
  v12 = v19;
  if ( !(_QWORD)v20 )
    v12 = s1;
  sub_13370(a2, (__int64)"[0x%x] %s_field: (0x%x) '%s'", a3, a4, dword_28410, v12);
  if ( v11 )
    qfree(v11);
  v13 = a2 + v7;
  if ( a2 >= v13 )
    return -1;
  if ( v13 < *(_QWORD *)(a1 + 152) )
    return -1;
  if ( v13 >= *(_QWORD *)(a1 + 160) )
    return -1;
  v17 = v13;
  if ( !sub_7BA0((int *)&v19, (__int64 *)&v17, 0) )
    return -1;
  sub_13370(v13, (__int64)"%s: 0x%x", "Access flags", (_DWORD)v19);
  v14 = v17;
  sub_5F10(v13, v17);
  return v14;
}

