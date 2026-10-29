/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82EB4
// Address: 0x0000000000082EB4

//----- (0000000000082EB4) ----------------------------------------------------
__int64 __fastcall sub_82EB4(__int64 a1, __int64 a2)
{
  int v4; // w8
  bool v5; // nf
  __int64 v6; // x21
  __int64 result; // x0
  int qerrno; // w0
  __int64 v9; // x22
  __int64 v10; // x8
  unsigned __int64 v11; // x9
  unsigned __int64 v12; // x10

  v4 = *(_DWORD *)(a1 + 336) + 1;
  v5 = *(_DWORD *)(a1 + 336) - 1023 < 0;
  *(_DWORD *)(a1 + 336) = v4;
  if ( v5 == __OFSUB__(v4, 1024) )
    longjmp((struct __jmp_buf_tag *)(a1 + 344), 54);
  sub_82FE8(a1, a2, 1);
  v6 = *(_QWORD *)(a1 + 600);
  if ( *(_WORD *)(v6 + 24) != 41 )
    sub_82EA4(a1);
  result = sub_810F0((__int64 *)a1, *(_QWORD *)(a1 + 600), 0, nullptr);
  if ( !(_DWORD)result && *(_QWORD *)(a1 + 64) )
    result = sub_81F70((__int128 *)a1, (char **)v6);
  if ( (_DWORD)result )
  {
    qerrno = get_qerrno();
    longjmp((struct __jmp_buf_tag *)(a1 + 344), qerrno);
  }
  if ( *(_BYTE *)(a1 + 608) )
  {
    *(_BYTE *)(a1 + 608) = 0;
    v9 = *(_QWORD *)(a1 + 612);
    result = sub_83124(a1, a2, 0);
    v10 = *(_QWORD *)(a2 + 8);
    v11 = 0xFFFFFFFFFFFFFFFFLL >> (-8 * BYTE4(v9));
    *(_QWORD *)(a2 + 8) = v11 & v10;
    *(_BYTE *)a2 = v9;
    if ( !(_BYTE)v9 )
    {
      v12 = 0x8000000000000000LL >> (-8 * BYTE4(v9));
      if ( (v11 & v10 & v12) != 0 )
        *(_QWORD *)(a2 + 8) = v10 | ~v11 | v12;
    }
    *(_QWORD *)(a1 + 612) = v9;
  }
  --*(_DWORD *)(a1 + 336);
  return result;
}
