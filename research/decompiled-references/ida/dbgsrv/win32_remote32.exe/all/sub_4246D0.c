/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4246D0
// Address: 0x004246D0

//----- (004246D0) --------------------------------------------------------
int __userpurge sub_4246D0@<eax>(int a1@<ebx>, int a2@<edi>, char *a3)
{
  unsigned int v4; // eax
  char *v5; // edi
  __m128i *v6; // eax
  int v7; // ecx
  int v8; // eax
  __int64 v9; // [esp-8h] [ebp-14h]
  __int64 v10; // [esp+4h] [ebp-8h] BYREF

  if ( !a3 )
    return sub_45CC20(1531);
  v4 = *a3 - 2;
  HIDWORD(v9) = a2;
  while ( 2 )
  {
    switch ( v4 )
    {
      case 0u:
        *((_QWORD *)a3 + 1) = *((int *)a3 + 2);
        *a3 = 9;
        return 0;
      case 1u:
        v5 = a3 + 8;
        v8 = sub_45F060((int *)&v10, (_WORD *)a3 + 4, 0);
        if ( v8 == 1 )
          goto LABEL_12;
        return sub_420440(v8);
      case 5u:
        v5 = a3 + 8;
        v6 = (__m128i *)MultiByteStr;
        if ( *((_DWORD *)a3 + 3) )
          v6 = *(__m128i **)v5;
        LODWORD(v9) = &v10;
        v10 = 0;
        sub_453D70(a1, v6, "%I64i", v9);
        sub_423B70((int)a3);
LABEL_12:
        v7 = HIDWORD(v10);
        *(_DWORD *)v5 = v10;
        *((_DWORD *)v5 + 1) = v7;
        *a3 = 9;
        return 0;
      case 7u:
        return 0;
      case 8u:
        if ( sub_4239C0(a3, 2) )
        {
          v4 = *a3 - 2;
          if ( v4 > 8 )
            return sub_45CC20(1531);
          continue;
        }
        return sub_45C9E0();
      default:
        return sub_45CC20(1531);
    }
  }
}
// 4246D0: could not find valid save-restore pair for edi
