__int64 __fastcall sub_4B03A0(__int64 a1)
{
  __int16 v1; // cx
  unsigned int v2; // edx
  unsigned int v3; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  int v7; // eax
  unsigned int v8; // eax

  if ( (unsigned __int64)sub_4AFDE0((int *)a1) >> 2 )
  {
    v5 = sub_4AFFA0((unsigned int *)a1);
    *(_DWORD *)(a1 + 1044) = node2ea(v5);
    v6 = sub_4AFFA0((unsigned int *)a1);
    *(_DWORD *)(a1 + 1056) = node2ea(v6);
    v7 = sub_4AFFA0((unsigned int *)a1);
    *(_WORD *)(a1 + 1050) = v7;
    *(_WORD *)(a1 + 1048) = HIWORD(v7);
    v8 = sub_4AFFA0((unsigned int *)a1);
    v2 = 1;
    v1 = v8;
    v3 = HIWORD(v8);
  }
  else
  {
    *(_DWORD *)(a1 + 1056) = -1;
    v1 = 0;
    v2 = 0;
    *(_QWORD *)(a1 + 1044) = 0xFFFFFFFFLL;
    LOWORD(v3) = 0;
  }
  *(_WORD *)(a1 + 1054) = v3;
  *(_WORD *)(a1 + 1052) = v1;
  return v2;
}

