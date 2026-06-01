/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4079E0
// Address: 0x004079E0

//----- (004079E0) --------------------------------------------------------
int __thiscall sub_4079E0(_DWORD **this, int a2, char *a3)
{
  _DWORD **v3; // ebx
  char *v4; // edi
  void *v5; // esi
  __int16 *v6; // ecx
  unsigned int v7; // esi
  __int16 *v8; // eax
  int v9; // eax
  int v10; // esi
  _DWORD *v12; // [esp-14h] [ebp-4Ch]
  char v13; // [esp+0h] [ebp-38h]
  int v14; // [esp+4h] [ebp-34h]
  void *v15; // [esp+10h] [ebp-28h] BYREF
  int v16; // [esp+14h] [ebp-24h]
  int v17; // [esp+18h] [ebp-20h]
  __int16 *v18; // [esp+1Ch] [ebp-1Ch] BYREF
  unsigned int v19; // [esp+20h] [ebp-18h]
  int v20; // [esp+24h] [ebp-14h]
  _DWORD **v21; // [esp+28h] [ebp-10h]
  int v22; // [esp+34h] [ebp-4h]

  v3 = this;
  v21 = this;
  v15 = nullptr;
  v16 = 0;
  v17 = 0;
  v4 = a3;
  v5 = nullptr;
  v22 = 0;
  if ( a3 )
  {
    v6 = nullptr;
    v18 = nullptr;
    v19 = 0;
    v20 = 0;
    LOBYTE(v22) = 1;
    v7 = strlen(a3);
    if ( v7 != -1 )
    {
      v6 = (__int16 *)sub_453B00((int)&v18, nullptr, v7 + 1, 1u);
      v18 = v6;
    }
    v19 = v7 + 1;
    sub_464310((unsigned int)v6, (unsigned int)v4, v7);
    *((_BYTE *)v18 + v7) = 0;
    v8 = &word_4B69CE;
    if ( v19 )
      v8 = v18;
    LOBYTE(v22) = 2;
    sub_45AAC0((int)&v15, (int)v8, -1);
    v5 = v15;
    LOBYTE(v22) = 3;
    if ( v18 )
    {
      v19 = 0;
      sub_453A20(v18);
      v18 = nullptr;
      v20 = 0;
    }
    v3 = v21;
  }
  a3 = nullptr;
  v9 = *v3[7];
  v12 = v3[7];
  LOBYTE(v22) = 4;
  v10 = (*(int (__stdcall **)(_DWORD *, _DWORD, void *, int, char **))(v9 + 84))(v12, 0, v5, 6, &a3);
  if ( !v10 )
    sub_403E30(v4, 0, a2, a3, v13, v14);
  LOBYTE(v22) = 5;
  if ( a3 )
    (*(void (__stdcall **)(char *))(*(_DWORD *)a3 + 8))(a3);
  v22 = 6;
  if ( v15 )
  {
    v16 = 0;
    sub_453A20(v15);
  }
  return v10;
}
// 407AFC: variable 'v13' is possibly undefined
// 407AFC: variable 'v14' is possibly undefined
// 4B69CE: using guessed type __int16 word_4B69CE;
