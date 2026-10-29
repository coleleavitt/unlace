__int64 __fastcall sub_7818A0(__int64 a1)
{
  char v1; // al
  unsigned int v2; // edx
  unsigned __int64 v3; // rcx
  int *v5; // rdx
  int v6; // eax
  unsigned int v7; // edx

  v1 = *(_BYTE *)(a1 + 68);
  v2 = v1 & 1;
  if ( (v1 & 1) == 0 )
    return v2;
  v3 = *(_QWORD *)(a1 + 40);
  v2 = 0;
  if ( v3 > 7 || (_DWORD)v3 )
    return v2;
  v5 = *(int **)(a1 + 72);
  if ( (~v1 & 0xC) != 0 && (v1 & 0xC) != 0 )
    v5 = *((int **)v5 + 1);
  v6 = *v5;
  v2 = 0;
  if ( (v6 & 0x20000) != 0 )
    return v2;
  LOBYTE(v7) = (unsigned int)sub_781830(a1) == 0;
  return v7;
}

