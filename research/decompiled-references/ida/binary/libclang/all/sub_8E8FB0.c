unsigned __int64 __fastcall sub_8E8FB0(__int64 a1)
{
  int v2; // ebp
  __int64 v3; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rdi
  int v7; // edx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdi

  v2 = *(_DWORD *)(a1 + 48);
  if ( v2 == 3 )
    return *(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL;
  v3 = sub_8E5480(a1);
  if ( !v2 && *(_BYTE *)(v3 + 51) && !*(_QWORD *)(v3 + 32) && *(_QWORD *)a1 != *(_DWORD *)(a1 + 32) )
  {
    v5 = sub_BEDF70(v3) & 0xFFFFFFFFFFFFFFF0LL;
    v6 = *(_QWORD *)v5;
    v7 = *(unsigned __int8 *)(*(_QWORD *)v5 + 16LL);
    if ( v7 != 2 && v7 != 6 && v7 != 5 && v7 != 4 )
    {
      if ( v7 != 3 )
      {
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
          goto LABEL_17;
        v6 = sub_B0D320(v6);
      }
      if ( !v6 )
      {
LABEL_17:
        v8 = sub_8E5480(a1);
        v9 = sub_BEDF70(v8) & 0xFFFFFFFFFFFFFFF0LL;
        v6 = *(_QWORD *)v9;
        if ( *(_BYTE *)(*(_QWORD *)v9 + 16LL) != 14
          && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 14
           || (v6 = sub_B0D320(v6)) == 0) )
        {
          v10 = sub_8E5480(a1);
          v6 = *(_QWORD *)(sub_BEDF70(v10) & 0xFFFFFFFFFFFFFFF0LL);
          v11 = *(unsigned __int8 *)(v6 + 16);
          if ( v11 != 56
            && v11 != 57
            && ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 56 > 1
             || (v6 = sub_B0D320(v6)) == 0) )
          {
            v12 = sub_8E5480(a1);
            return sub_BEDF70(v12);
          }
        }
      }
    }
    return *(_QWORD *)(v6 + 32);
  }
  return sub_BEDF70(v3);
}

