/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_185D8
// Address: 0x000185D8

//----- (000185D8) --------------------------------------------------------
bool __fastcall sub_185D8(int a1, int a2)
{
  FILE *v3; // r1
  int v4; // r0
  double v5; // r2
  _BOOL4 v6; // r4
  int v8; // r0
  int v9; // r3
  const char *v10; // r7
  char *v11; // r0
  unsigned __int8 *v12; // r7
  size_t v13; // r0
  unsigned __int8 *v14; // r5
  int v15; // r0
  unsigned __int8 v16; // r8
  size_t v17; // r0
  size_t v18; // r5
  unsigned int v19; // r8
  void *v20; // r0
  double v21; // [sp+0h] [bp-30h]
  double v22; // [sp+10h] [bp-20h]
  const char *v23; // [sp+18h] [bp-18h]
  int v24; // [sp+1Ch] [bp-14h] BYREF
  __int64 ptr; // [sp+20h] [bp-10h] BYREF
  _DWORD *v26; // [sp+28h] [bp-8h]

  v3 = *(FILE **)(a1 + 1104);
  ptr = 0;
  v26 = nullptr;
  v4 = sub_77D94((int *)&ptr, v3);
  HIDWORD(v5) = ptr;
  if ( v4 > 0 )
  {
    *(_BYTE *)(a2 + 40) = 0;
    *(_BYTE *)(a2 + 31) = 0;
    *(_BYTE *)(a2 + 39) = 0;
    LODWORD(v22) = &v24;
    *(_DWORD *)a2 = -1;
    v8 = HIDWORD(v5);
    LODWORD(v5) = a2;
    HIDWORD(v5) = a2 + 4;
    LODWORD(v21) = a2 + 24;
    HIDWORD(v21) = a2 + 8;
    if ( sub_7EC4C(v8, "%a-%a %7s %a %7s %llx%n", v5, v21, (const char *)(a2 + 32), v22, v23, ptr, v26) == 6 )
    {
      v9 = HIDWORD(ptr);
      *(_BYTE *)(a2 + 40) = 1;
      if ( v9 )
        v10 = (const char *)ptr;
      else
        v10 = (const char *)&dword_8DB98;
      v11 = strchr(v10, 45);
      if ( v11 && (unsigned int)(v11 - v10 - 9) <= 0xFFFFFFF5 )
      {
        *(_BYTE *)(a2 + 40) = 2;
        if ( under_debugger )
          __und(0xFFu);
        sub_78C64(2777);
      }
      v12 = sub_7EE04((unsigned __int8 *)(ptr + v24));
      v13 = strlen((const char *)v12);
      v14 = &v12[v13];
      if ( &v12[v13] > v12 )
      {
        v15 = *(v14 - 1);
        v16 = v15 & 0x80;
        if ( (v15 & 0xFFFFFF80) == 0 )
        {
          do
          {
            if ( !isspace(v15) )
              break;
            *--v14 = v16;
            if ( v12 == v14 )
              break;
            v15 = *(v14 - 1);
          }
          while ( (v15 & 0x80) == 0 );
        }
      }
      if ( v14 - v12 > 10 && !strncmp((const char *)v14 - 10, " (deleted)", 0xAu) )
        *(v14 - 10) = 0;
      if ( v12 && (v17 = strlen((const char *)v12), (v18 = v17) != 0) )
      {
        v19 = v17 + 1;
        v20 = *(void **)(a2 + 44);
        if ( v19 > *(_DWORD *)(a2 + 52) )
        {
          v20 = sub_78018(a2 + 44, *(void **)(a2 + 44), v19, 1u);
          *(_DWORD *)(a2 + 44) = v20;
        }
        *(_DWORD *)(a2 + 48) = v19;
        memmove(v20, v12, v18);
        *(_BYTE *)(*(_DWORD *)(a2 + 44) + v18) = 0;
      }
      else
      {
        *(_DWORD *)(a2 + 48) = 0;
      }
    }
    HIDWORD(v5) = ptr;
    v6 = *(_DWORD *)a2 != -1;
  }
  else
  {
    v6 = 0;
  }
  if ( HIDWORD(v5) )
  {
    HIDWORD(ptr) = 0;
    sub_77F70((void *)HIDWORD(v5));
  }
  return v6;
}
// 18668: variable 'v22' is possibly undefined
// 18668: variable 'v23' is possibly undefined
// 8DB98: using guessed type int dword_8DB98;
// D6C20: using guessed type char under_debugger;
