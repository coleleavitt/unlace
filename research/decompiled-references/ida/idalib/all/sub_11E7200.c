__int64 __fastcall sub_11E7200(_DWORD *a1)
{
  unsigned int *v2; // rdi
  char v3; // dl
  int v4; // ecx
  int v5; // eax
  __int64 result; // rax
  __int128 v7; // [rsp+0h] [rbp-18h] BYREF

  if ( a1[983] != 1 )
  {
    switch ( a1[983] )
    {
      case 0:
        v2 = a1 + 985;
        v4 = 13;
        v3 = 1;
        v5 = 10;
        goto LABEL_5;
      case 2:
        v2 = a1 + 985;
        goto LABEL_4;
      case 3:
        v2 = a1 + 985;
        v4 = 0;
        v3 = 0;
        v5 = 4;
        goto LABEL_5;
      case 4:
      case 5:
        return 0;
      default:
        __asm { jmp     rax }
        return result;
    }
  }
  v2 = a1 + 985;
  if ( a1[984] == 2 )
  {
    v7 = 0x8000000D0000000ALL;
    return sub_A09E20(v2, (unsigned int *)&v7);
  }
  else
  {
LABEL_4:
    v3 = 0;
    v4 = 0;
    v5 = 11;
LABEL_5:
    LODWORD(v7) = v5;
    HIDWORD(v7) = 0;
    *(_QWORD *)((char *)&v7 + 4) = v4 | DWORD1(v7) & 0x80000000;
    *(_DWORD *)((char *)&v7 + 7) = (unsigned __int8)(v3 << 7);
    return sub_A09E20(v2, (unsigned int *)&v7);
  }
}
