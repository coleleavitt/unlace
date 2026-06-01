/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AB630
// Address: 0x00000000000AB630

//----- (00000000000AB630) ----------------------------------------------------
__int64 __fastcall sub_AB630(__int64 a1, void *a2, size_t a3)
{
  unsigned int v4; // ebp
  ssize_t v5; // rax
  __int64 v6; // rbx
  int *v7; // rax
  int v8; // eax

  v4 = *(_DWORD *)(a1 + 56);
  while ( 1 )
  {
    v5 = recvfrom(v4, a2, a3, 0, nullptr, nullptr);
    v6 = v5;
    if ( v5 != -1 )
      break;
    v7 = (int *)__errno(v4);
    if ( *v7 != 4 )
      goto LABEL_4;
  }
  if ( a3 && !v5 )
  {
    *(_QWORD *)(a1 + 88) = "connection_closed_by_peer";
    v6 = -1;
    v8 = 0;
    goto LABEL_8;
  }
  if ( v5 < 0 )
  {
    v7 = (int *)__errno(v4);
LABEL_4:
    *(_QWORD *)(a1 + 88) = "recv";
    v8 = *v7;
LABEL_8:
    *(_DWORD *)(a1 + 96) = v8;
  }
  return v6;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
