/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000E770
// Address: 0x000000014000E770

//----- (000000014000E770) ----------------------------------------------------
__int64 __fastcall sub_14000E770(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  int v4; // esi
  int v6; // eax
  void *v7; // rcx
  int v8; // eax
  __int64 v9; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // rax
  size_t v12; // r8
  __int64 result; // rax

  v4 = a3;
  sub_140063190(a2, 11);
  v6 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
  if ( v6 != 1 && v6 != 11 && v6 != 8 )
    goto LABEL_16;
  *(_BYTE *)(a2 + 16) = 1;
  *(_DWORD *)(a1 + 904) = 2 * v4 + 1;
  v7 = *(void **)(a1 + 912);
  if ( v7 != (void *)-1LL )
  {
    SetEvent(v7);
    *(_QWORD *)(a1 + 912) = -1;
  }
  v8 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
  if ( v8 != 1 && v8 != 11 && v8 != 8 )
  {
LABEL_16:
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(3295);
  }
  v9 = a2 + 24;
  sub_140013780(a1, (__int16 **)v9);
  v10 = (_QWORD *)(a1 + 1024);
  if ( v10 != (_QWORD *)v9 )
  {
    v11 = *(_QWORD *)(v9 + 8);
    v12 = v11 - 1;
    if ( !v11 )
      v12 = 0;
    if ( v12 )
      sub_140001810((__int64)v10, *(const void **)v9, v12);
    else
      v10[1] = 0;
  }
  v10[3] = *(_QWORD *)(v9 + 24);
  v10[4] = *(_QWORD *)(v9 + 32);
  result = *(_QWORD *)(v9 + 40);
  v10[5] = result;
  return result;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
