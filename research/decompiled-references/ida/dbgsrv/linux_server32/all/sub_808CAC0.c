/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808CAC0
// Address: 0x0808CAC0

//----- (0808CAC0) --------------------------------------------------------
_DWORD *__cdecl sub_808CAC0(_DWORD *a1)
{
  _DWORD *v1; // esi
  int v2; // eax
  int v3; // eax
  int v5; // ecx
  int v6; // eax
  char *v7; // [esp-44h] [ebp-44h] BYREF
  int v8; // [esp-40h] [ebp-40h]
  int v9; // [esp-3Ch] [ebp-3Ch]
  unsigned __int8 v10; // [esp-34h] [ebp-34h] BYREF
  __int128 v11; // [esp-30h] [ebp-30h]
  unsigned int v12; // [esp-20h] [ebp-20h]

  v12 = __readgsdword(0x14u);
  v7 = nullptr;
  v8 = 0;
  v9 = 0;
  v1 = (_DWORD *)sub_808B670((int)a1, (int *)&v7);
  if ( v1 )
  {
    v2 = a1[4];
    v10 = 2;
    v11 = 0;
    sub_8089810(&v10, (unsigned __int8 *)(a1[3] + 20 * v2 - 20));
    v3 = a1[4];
    if ( v3 )
    {
      v5 = a1[3];
      v6 = v3 - 1;
      a1[4] = v6;
      sub_8089430(v5 + 20 * v6);
    }
    sub_8089430((int)&v10);
    v1 = (_DWORD *)sub_808BFF0(a1, v1, (const char **)&v7, (unsigned __int8 *)(a1[3] + 20 * a1[4] - 20));
  }
  else
  {
    sub_808CA30(a1);
  }
  if ( v7 )
  {
    v8 = 0;
    sub_80CF780(v7);
  }
  if ( v12 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v1;
}
