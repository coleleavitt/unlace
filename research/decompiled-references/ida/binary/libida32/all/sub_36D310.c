__int64 __fastcall sub_36D310(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int v6; // eax
  _BYTE *v7; // rcx
  char v9[520]; // [rsp+0h] [rbp-228h] BYREF
  unsigned __int64 v10; // [rsp+208h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v6 = 0;
  if ( *(_QWORD *)(a1 + 48) )
  {
    v7 = *(_BYTE **)(a1 + 40);
    if ( *v7 )
    {
      qsnprintf((int)v9, 512, (int)"$ idc_array %s", (int)v7, a5, a6, v9[0]);
      v6 = (unsigned __int8)netnode_rename(*(unsigned int *)(a1 + 8), v9, 0);
    }
  }
  *(_DWORD *)(a2 + 8) = v6;
  return 0;
}

