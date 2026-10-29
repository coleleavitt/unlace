void __fastcall sub_8C1CD0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r13
  int v5; // eax
  void *v6; // r14
  bool v7; // al
  bool v8; // al
  int v9; // eax

  if ( a3 != -2 )
  {
    v3 = a1 + 96;
    if ( (unsigned __int8)sub_89B840(a2, a1 + 96) && (!*(_BYTE *)a1 || (unsigned __int8)sub_89B840(a1 + 16, a2)) )
    {
      sub_27B950((__int64)qword_1C7F2C0, a1 + 16, (int *)a2);
      v5 = *(_DWORD *)(a2 + 32);
      *(_DWORD *)(a1 + 4) = a3;
      *(_BYTE *)a1 = 1;
      *(_DWORD *)(a1 + 48) = v5;
    }
    else if ( (unsigned __int8)sub_89B840(v3, a2) && (!*(_BYTE *)(a1 + 1) || (unsigned __int8)sub_89B840(a2, a1 + 56)) )
    {
      sub_27B950((__int64)qword_1C7F2C0, a1 + 56, (int *)a2);
      v9 = *(_DWORD *)(a2 + 32);
      *(_DWORD *)(a1 + 8) = a3;
      *(_BYTE *)(a1 + 1) = 1;
      *(_DWORD *)(a1 + 88) = v9;
    }
    else
    {
      v6 = qword_1C7F2C0;
      if ( (*(_BYTE *)(a2 + 4) & 1) != 0 || (*(_BYTE *)(a1 + 100) & 1) != 0 )
        v7 = (unsigned int)sub_182C7B0(qword_1C7F2C0, a2, v3) == 0;
      else
        v7 = *(_DWORD *)a2 == *(_DWORD *)(a1 + 96);
      if ( v7 )
      {
        if ( (*(_BYTE *)(a2 + 20) & 1) != 0 || (*(_BYTE *)(a1 + 116) & 1) != 0 )
          v8 = (unsigned int)sub_182C7B0(v6, a2 + 16, a1 + 112) == 0;
        else
          v8 = *(_DWORD *)(a2 + 16) == *(_DWORD *)(a1 + 112);
        if ( v8 && *(_DWORD *)(a2 + 32) == *(_DWORD *)(a1 + 128) )
        {
          *(_BYTE *)(a1 + 2) = 1;
          *(_DWORD *)(a1 + 12) = a3;
        }
      }
    }
  }
}

