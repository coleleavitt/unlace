/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42E170
// Address: 0x0042E170

//----- (0042E170) --------------------------------------------------------
unsigned int *__thiscall sub_42E170(int this, const char *a2, int a3)
{
  unsigned int *result; // eax
  _BYTE *v5; // ecx
  unsigned int v6; // esi
  unsigned int v7; // eax
  int *v8; // ecx
  int v9; // [esp-8h] [ebp-34h]
  _BYTE *v10; // [esp+10h] [ebp-1Ch] BYREF
  unsigned int v11; // [esp+14h] [ebp-18h]
  int v12; // [esp+18h] [ebp-14h]
  unsigned int *v13; // [esp+1Ch] [ebp-10h]
  int v14; // [esp+28h] [ebp-4h]

  result = *(unsigned int **)(this + 100);
  v13 = result;
  if ( result )
  {
    v5 = nullptr;
    v10 = nullptr;
    v11 = 0;
    v12 = 0;
    v14 = 0;
    if ( a2 )
    {
      v6 = strlen(a2);
      v7 = v6 + 1;
      if ( v6 != -1 )
      {
        v5 = sub_453B00((int)&v10, nullptr, v6 + 1, 1u);
        v7 = v6 + 1;
        v10 = v5;
      }
      v11 = v7;
      sub_464310((unsigned int)v5, (unsigned int)a2, v6);
      v10[v6] = 0;
      result = v13;
    }
    v14 = 1;
    sub_426F60(result, *(char **)(this + 108), (unsigned int *)&v10);
    v14 = 2;
    if ( v10 )
    {
      v11 = 0;
      sub_453A20(v10);
      v10 = nullptr;
      v12 = 0;
    }
    v8 = *(int **)(this + 100);
    v9 = *(_DWORD *)(this + 108);
    v14 = -1;
    return (unsigned int *)sub_426B50(v8, v9, a3);
  }
  return result;
}
