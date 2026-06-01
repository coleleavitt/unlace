/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65870
// Address: 0x00065870

//----- (00065870) --------------------------------------------------------
int __fastcall sub_65870(int a1, char *a2, int a3)
{
  __suseconds_t v4; // r0
  int v5; // r1
  const char *v6; // r3
  int v7; // r5
  void *ptr; // [sp+Ch] [bp-30h] BYREF
  int v10; // [sp+10h] [bp-2Ch]
  int v11; // [sp+14h] [bp-28h]
  char v12[28]; // [sp+18h] [bp-24h] BYREF

  ptr = nullptr;
  v10 = 0;
  v11 = 0;
  sub_18864((int)&ptr, a2, a3);
  v4 = sub_78F48();
  sub_66E0C(v12, 25, v4, v5, 0);
  if ( v10 )
    v6 = (const char *)ptr;
  else
    v6 = (const char *)&dword_8DB98;
  v7 = sub_695E4("%s [%u] %s", v12, *(_DWORD *)(a1 + 84), v6);
  if ( ptr )
  {
    v10 = 0;
    sub_77F70(ptr);
  }
  return v7;
}
// 658A6: variable 'v5' is possibly undefined
// 8DB98: using guessed type int dword_8DB98;
