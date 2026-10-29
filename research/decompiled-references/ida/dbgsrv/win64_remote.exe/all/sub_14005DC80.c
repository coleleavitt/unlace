/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005DC80
// Address: 0x000000014005DC80

//----- (000000014005DC80) ----------------------------------------------------
_BYTE *__fastcall sub_14005DC80(_BYTE *a1, __int64 a2, CHAR *a3)
{
  LPWSTR v6; // rax
  DWORD v7; // edx
  DWORD FullPathNameW; // eax
  unsigned __int16 *v9; // rdx
  unsigned __int64 v10; // rax
  char v11; // si
  char *v12; // rdx
  LPWSTR lpBuffer; // [rsp+20h] [rbp-50h] BYREF
  __int64 v15; // [rsp+28h] [rbp-48h]
  __int64 v16; // [rsp+30h] [rbp-40h]
  void *Block; // [rsp+38h] [rbp-38h] BYREF
  __int64 v18; // [rsp+40h] [rbp-30h]
  __int64 v19; // [rsp+48h] [rbp-28h]
  LPCWSTR lpFileName; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-18h]
  __int16 v22; // [rsp+98h] [rbp+28h] BYREF

  if ( a2 < 0 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(1225);
  }
  sub_14005EDE0((WCHAR **)&lpFileName, a3);
  v6 = nullptr;
  lpBuffer = nullptr;
  v15 = 0;
  v16 = 0;
  v22 = 0;
  if ( a2 != -2 )
  {
    sub_14005D960((__int64)&lpBuffer, a2 + 2, &v22);
    v6 = lpBuffer;
  }
  v6[a2 + 1] = 0;
  if ( v21 <= 1 )
    goto LABEL_22;
  v7 = v15 - 1;
  if ( !v15 )
    v7 = 0;
  FullPathNameW = GetFullPathNameW(lpFileName, v7, lpBuffer, nullptr);
  if ( !FullPathNameW || FullPathNameW >= (unsigned __int64)a2 )
    goto LABEL_22;
  Block = nullptr;
  v18 = 0;
  v19 = 0;
  v9 = (unsigned __int16 *)&dword_140092834;
  if ( v15 )
    v9 = lpBuffer;
  if ( !sub_140061D80((__int64)&Block, v9, FullPathNameW) )
    goto LABEL_18;
  v10 = v18 - 1;
  if ( !v18 )
    v10 = 0;
  if ( v10 < a2 )
  {
    v11 = 1;
    v12 = (char *)Str1;
    if ( v18 )
      v12 = (char *)Block;
    sub_140061AF0(a1, v12, a2);
  }
  else
  {
LABEL_18:
    v11 = 0;
  }
  if ( Block )
  {
    v18 = 0;
    j_free(Block);
  }
  if ( !v11 )
LABEL_22:
    sub_140061AF0(a1, a3, a2);
  if ( lpBuffer )
  {
    v15 = 0;
    j_free(lpBuffer);
    lpBuffer = nullptr;
    v16 = 0;
  }
  if ( lpFileName )
  {
    v21 = 0;
    j_free((void *)lpFileName);
  }
  return a1;
}
// 140092834: using guessed type int dword_140092834;
// 1400CB61C: using guessed type char byte_1400CB61C;
