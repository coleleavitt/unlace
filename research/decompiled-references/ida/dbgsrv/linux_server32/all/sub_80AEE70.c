/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80AEE70
// Address: 0x080AEE70

//----- (080AEE70) --------------------------------------------------------
_BOOL4 __cdecl sub_80AEE70(int a1, int a2)
{
  int v2; // ebp
  int v3; // edi
  _BOOL4 v4; // esi
  size_t v6; // eax
  _WORD v7[2566]; // [esp+10h] [ebp-142Ch] BYREF
  unsigned int v8; // [esp+141Ch] [ebp-20h]

  v8 = __readgsdword(0x14u);
  v7[0] = 0;
  v2 = *(_DWORD *)(a1 + 1084);
  memset(&v7[2], 0, 0x1408u);
  v3 = 0;
  if ( !a2 )
    v3 = *(_DWORD *)(a1 + 1080);
  sub_8058290();
  v4 = false;
  if ( (unsigned __int8)sub_80CED40(a1 + 4) )
  {
    if ( (unsigned __int8)sub_80AEDD0((int)v7, a1 + 4, v2) )
    {
      if ( !v3
        || (v6 = *(unsigned __int16 *)(v3 + 8), (_WORD)v6 == v7[4]) && !memcmp(&v7[5], (const void *)(v3 + 10), v6) )
      {
        v4 = true;
      }
    }
  }
  sub_8058290();
  if ( v8 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v4;
}
