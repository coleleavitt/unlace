unsigned __int64 __fastcall sub_B7EAB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  _QWORD *v7; // rdi
  unsigned __int64 result; // rax
  int v9; // ebp
  _QWORD *v10; // rbx
  __int64 v11; // rax

  v6 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v6 = *(_QWORD *)v6;
  if ( (*(_BYTE *)(v6 + 8) & 0x7Fu) - 58 > 3 )
    BUG();
  v7 = (_QWORD *)(v6 - 64);
  if ( (*(_BYTE *)(v6 + 10) & 1) == 0 )
    v7 = sub_B7E7B0((__int64)v7, a2, v6, a4, a5, a6);
  result = sub_B7E900((__int64)v7, a2, v6, a4, a5, a6);
  v9 = 0;
  v10 = (_QWORD *)result;
  if ( result )
  {
LABEL_7:
    ++v9;
    v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v10 + 32LL))(v10);
    *(_DWORD *)(v11 + 68) = (16 * v9) | *(_DWORD *)(v11 + 68) & 0xF;
    while ( 1 )
    {
      result = v10[1] & 0xFFFFFFFFFFFFFFF8LL;
      v10 = (_QWORD *)result;
      if ( !result )
        break;
      if ( (*(_BYTE *)(result + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_7;
    }
  }
  return result;
}
