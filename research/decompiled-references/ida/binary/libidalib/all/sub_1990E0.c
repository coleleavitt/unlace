void __fastcall sub_1990E0(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rbx
  int v6; // ebp
  unsigned int v7; // edx
  __int64 v8; // rdi
  int v9; // ecx

  if ( (_QWORD)xmmword_256B08 )
  {
    v5 = 0;
    v6 = a3 == 0 ? 7 : 135;
    while ( 1 )
    {
      v8 = *(_QWORD *)(qword_256B00 + 8 * v5);
      if ( a3 )
      {
        if ( (*(_BYTE *)(v8 + 1921) & 0x10) != 0 )
          break;
      }
      v9 = *(_DWORD *)(v8 + 2176);
      if ( v9 < 0 )
        goto LABEL_6;
      v7 = v6;
      if ( a2 & ((unsigned __int64)((v9 & 0x40) != 0) << v9) | a1 & ((unsigned __int64)((v9 & 0x40) == 0) << v9) )
      {
LABEL_5:
        sub_196B90(v8, 0, v7, 0);
LABEL_6:
        if ( ++v5 >= (unsigned __int64)xmmword_256B08 )
          return;
      }
      else if ( ++v5 >= (unsigned __int64)xmmword_256B08 )
      {
        return;
      }
    }
    v7 = 135;
    goto LABEL_5;
  }
  nullsub_130();
}

