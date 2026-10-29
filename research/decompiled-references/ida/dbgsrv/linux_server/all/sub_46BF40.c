/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46BF40
// Address: 0x000000000046BF40

//----- (000000000046BF40) ----------------------------------------------------
unsigned __int64 __fastcall sub_46BF40(__int64 a1, unsigned __int64 *a2)
{
  int v3; // eax
  unsigned __int64 result; // rax
  int v5; // edx
  int v6; // edx
  const char *v7; // r12
  unsigned __int64 v8; // rax
  size_t v9; // rbx
  void *v10; // rdi
  unsigned __int64 v11; // r13
  void *v12; // rax

  v3 = sub_47FD50(a2, a2[1]);
  sub_4787B0(a1, v3);
  *(_DWORD *)a1 = sub_47FD50(a2, a2[1]);
  *(_DWORD *)(a1 + 4) = sub_47FD50(a2, a2[1]);
  *(_QWORD *)(a1 + 8) = sub_47FE70(a2, a2[1]) - 1;
  result = sub_47FD50(a2, a2[1]);
  v5 = *(_DWORD *)(a1 + 20);
  *(_BYTE *)(a1 + 16) = (_DWORD)result != 0;
  v6 = v5 & 0xFFFFFFF;
  switch ( v6 )
  {
    case 1:
    case 8:
    case 11:
      return sub_46BCA0(a1 + 24, a2);
    case 2:
    case 4:
      result = sub_47FD50(a2, a2[1]);
      if ( (((*(_DWORD *)(a1 + 20) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) != 0 )
        sub_46B6E0();
      *(_DWORD *)(a1 + 24) = result;
      return result;
    case 3:
    case 9:
    case 10:
      v7 = (const char *)*a2;
      v8 = *a2;
      break;
    case 5:
      *(_QWORD *)(a1 + 24) = sub_47FE70(a2, a2[1]) - 1;
      result = sub_47FE70(a2, a2[1]) - 1;
      *(_QWORD *)(a1 + 32) = result;
      return result;
    case 7:
      return sub_46BE50(a1 + 24, a2);
    default:
      return result;
  }
  do
  {
    if ( v8 >= a2[1] )
    {
      result = (unsigned int)(v6 - 9);
      if ( (unsigned int)result > 1 && v6 != 3 )
        goto LABEL_20;
LABEL_9:
      *(_QWORD *)(a1 + 32) = 0;
      return result;
    }
    ++v8;
  }
  while ( *(_BYTE *)(v8 - 1) );
  *a2 = v8;
  result = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
  if ( (unsigned int)(result - 9) > 1 && (_DWORD)result != 3 )
LABEL_20:
    sub_46B700();
  if ( !v7 )
    goto LABEL_9;
  result = strlen(v7);
  v9 = result;
  if ( !result )
    goto LABEL_9;
  v10 = *(void **)(a1 + 24);
  v11 = result + 1;
  if ( *(_QWORD *)(a1 + 40) < result + 1 )
  {
    v12 = sub_481540(a1 + 24, *(void **)(a1 + 24), v11, 1u);
    *(_QWORD *)(a1 + 24) = v12;
    v10 = v12;
  }
  *(_QWORD *)(a1 + 32) = v11;
  memmove(v10, v7, v9);
  result = *(_QWORD *)(a1 + 24);
  *(_BYTE *)(result + v9) = 0;
  return result;
}
