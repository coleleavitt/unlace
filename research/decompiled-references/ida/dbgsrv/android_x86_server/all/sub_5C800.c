/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5C800
// Address: 0x0005C800

//----- (0005C800) --------------------------------------------------------
unsigned int __cdecl sub_5C800(int a1, int a2)
{
  int qerrno; // eax
  int v3; // esi
  char *v4; // edi
  int v5; // eax
  char *v6; // esi
  size_t v7; // eax
  size_t v8; // eax
  int v9; // esi
  int v10; // esi
  int v12; // [esp+18h] [ebp-34h]
  int v13; // [esp+1Ch] [ebp-30h] BYREF
  int v14; // [esp+20h] [ebp-2Ch] BYREF
  int v15; // [esp+24h] [ebp-28h] BYREF
  int v16; // [esp+28h] [ebp-24h]
  int v17; // [esp+2Ch] [ebp-20h]
  int v18; // [esp+30h] [ebp-1Ch]
  unsigned int v19; // [esp+38h] [ebp-14h]

  v19 = __readgsdword(0x14u);
  LOBYTE(v14) = 2;
  v16 = 0;
  v15 = 0;
  v18 = 0;
  v17 = 0;
  v13 = -1;
  qerrno = get_qerrno();
  v3 = *(_DWORD *)(a1 + 56);
  v12 = qerrno;
  if ( v3 )
  {
    v4 = sub_52CF0(v3, *(_DWORD *)(a1 + 60), (unsigned int *)&v13);
    v5 = *(_DWORD *)(a1 + 56);
    if ( *(_DWORD *)(v5 + 4) )
      v6 = *(char **)v5;
    else
      v6 = byte_EF875;
  }
  else
  {
    v6 = nullptr;
    v4 = nullptr;
  }
  if ( (char)v14 == 5 )
  {
    sub_59680((void *)v15, (char *)&v14);
  }
  else if ( (char)v14 == 7 && v15 )
  {
    v16 = 0;
    qfree((void *)v15);
    v15 = 0;
    v17 = 0;
  }
  LOBYTE(v14) = 2;
  v15 = 0;
  if ( v4 )
    v7 = strlen(v4);
  else
    v7 = 0;
  LOBYTE(v14) = 7;
  sub_2DCA0(&v15, v4, v7);
  set_idcv_attr(a2, "file", (char *)&v14, 0);
  if ( (char)v14 == 5 )
  {
    sub_59680((void *)v15, (char *)&v14);
  }
  else if ( (char)v14 == 7 && v15 )
  {
    v16 = 0;
    qfree((void *)v15);
    v15 = 0;
    v17 = 0;
  }
  LOBYTE(v14) = 2;
  v15 = 0;
  if ( v6 )
    v8 = strlen(v6);
  else
    v8 = 0;
  LOBYTE(v14) = 7;
  sub_2DCA0(&v15, v6, v8);
  set_idcv_attr(a2, "func", (char *)&v14, 0);
  v9 = v13;
  if ( (char)v14 == 5 )
  {
    sub_59680((void *)v15, (char *)&v14);
  }
  else if ( (char)v14 == 7 && v15 )
  {
    v16 = 0;
    qfree((void *)v15);
    v15 = 0;
    v17 = 0;
  }
  LOBYTE(v14) = 2;
  v15 = v9;
  set_idcv_attr(a2, "line", (char *)&v14, 0);
  v10 = *(_DWORD *)(a1 + 60);
  if ( (char)v14 == 5 )
  {
    sub_59680((void *)v15, (char *)&v14);
  }
  else if ( (char)v14 == 7 && v15 )
  {
    v16 = 0;
    qfree((void *)v15);
    v15 = 0;
    v17 = 0;
  }
  LOBYTE(v14) = 2;
  v15 = v10;
  set_idcv_attr(a2, "pc", (char *)&v14, 0);
  set_qerrno(v12);
  if ( (char)v14 == 5 )
  {
    sub_59680((void *)v15, (char *)&v14);
  }
  else if ( (char)v14 == 7 && v15 )
  {
    v16 = 0;
    qfree((void *)v15);
    v15 = 0;
    v17 = 0;
  }
  return __readgsdword(0x14u);
}
