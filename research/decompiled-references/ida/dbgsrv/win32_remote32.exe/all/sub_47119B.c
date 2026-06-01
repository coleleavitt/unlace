/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47119B
// Address: 0x0047119B

//----- (0047119B) --------------------------------------------------------
char __userpurge sub_47119B@<al>(unsigned __int64 a1@<ebx:ecx>, int a2@<edi>, int a3, int a4)
{
  int v4; // esi
  int v5; // eax
  int v6; // edx
  int v8[4]; // [esp-28h] [ebp-34h] BYREF
  __int64 v9; // [esp-18h] [ebp-24h]
  _BYTE *v10; // [esp-10h] [ebp-1Ch]
  int v11; // [esp-Ch] [ebp-18h]
  int v12; // [esp-8h] [ebp-14h]
  int v13; // [esp-4h] [ebp-10h]
  char v14; // [esp+Bh] [ebp-1h] BYREF

  v4 = a1;
  sub_47130B(a1);
  v13 = a4;
  v14 = 0;
  v12 = a3;
  sub_46D440(v8, v4 + 8, *(_DWORD *)(v4 + 48), *(_DWORD *)(v4 + 52), &v14);
  v5 = sub_46DE8B(a1, a2, *(_DWORD **)(v4 + 104), v8[0], v8[1], v8[2], v8[3], v9, v10, v11, v12, v13);
  if ( !v14 )
    return 0;
  if ( *(_BYTE *)(v4 + 46) )
    return 1;
  return sub_4719D4(v4, SHIDWORD(a1), a2, v5, v6);
}
// 4711D3: variable 'a1' is possibly undefined
// 4711F3: variable 'v6' is possibly undefined
