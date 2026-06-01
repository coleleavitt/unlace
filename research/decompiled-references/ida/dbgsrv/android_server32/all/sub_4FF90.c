/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4FF90
// Address: 0x0004FF90

//----- (0004FF90) --------------------------------------------------------
int __fastcall sub_4FF90(int a1, char *s)
{
  size_t v3; // r5
  char *v4; // r7
  int *v5; // r4
  _DWORD **v7; // [sp+8h] [bp-1Ch]
  char *v8; // [sp+Ch] [bp-18h]
  _DWORD *v9; // [sp+10h] [bp-14h]
  unsigned int v10; // [sp+14h] [bp-10h] BYREF
  size_t v11; // [sp+18h] [bp-Ch]
  void *ptr; // [sp+1Ch] [bp-8h]
  int v13; // [sp+20h] [bp-4h]

  if ( *(_BYTE *)(a1 + 488) )
  {
    if ( !under_debugger )
      interr(303);
    __debugbreak();
  }
  v9 = *(_DWORD **)(a1 + 464);
  ptr = nullptr;
  v11 = 0;
  v10 = 0;
  v7 = (_DWORD **)(a1 + 464);
  v3 = strlen(s);
  if ( v3 >= 0xFFFFFFF0 )
    sub_55F54();
  v8 = s;
  if ( v3 >= 0xB )
  {
    v4 = (char *)operator new((v3 + 16) & 0xFFFFFFF0);
    ptr = v4;
    v10 = ((v3 + 16) & 0xFFFFFFF0) + 1;
    v11 = v3;
    goto LABEL_7;
  }
  LOBYTE(v10) = 2 * v3;
  v4 = (char *)&v10 + 1;
  if ( v3 )
LABEL_7:
    qmemcpy(v4, v8, v3);
  v4[v3] = 0;
  v5 = sub_56270(v9, (unsigned __int8 *)&v10);
  if ( (unsigned __int8)v10 << 31 )
    operator delete(ptr);
  if ( v5 )
    sub_56CD0(*v7, v5);
  return _stack_chk_guard - v13;
}
// E0550: using guessed type char under_debugger;
