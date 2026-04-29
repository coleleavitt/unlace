__int64 __fastcall sub_3E2C0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rcx
  int v4; // r9d
  unsigned int v5; // r8d
  __int64 *v6; // rax
  __int64 v7; // rsi
  int v8; // eax
  __int64 v9; // rax

  v3 = a2;
  switch ( a3 )
  {
    case 1u:
      v4 = 11;
      goto LABEL_4;
    case 2u:
    case 4u:
      goto LABEL_3;
    case 3u:
    case 5u:
      v4 = 4;
      goto LABEL_4;
    case 6u:
      v4 = 4;
      if ( *(_DWORD *)(a1 + 480) != 7 )
LABEL_3:
        v4 = 9;
      goto LABEL_4;
    case 0xCu:
      v4 = 1879048189;
      goto LABEL_4;
    case 0xDu:
      v4 = 1879048190;
      goto LABEL_4;
    case 0xEu:
      v4 = 1879048191;
LABEL_4:
      v5 = 0;
      v6 = (__int64 *)(a1 + 32LL * a3);
      if ( *v6 <= 0 )
        return v5;
      v7 = a1 + 32LL * (int)a3;
      if ( !*(_QWORD *)(v7 + 16) )
        return v5;
      *(_OWORD *)(v3 + 16) = 0;
      *(_OWORD *)(v3 + 32) = 0;
      *(_OWORD *)v3 = 0;
      *(_OWORD *)(v3 + 48) = 0;
      *(_QWORD *)(v3 + 16) = v6[1];
      *(_QWORD *)(v3 + 24) = *v6;
      *(_QWORD *)(v3 + 32) = *(_QWORD *)(v7 + 16);
      v8 = *(_DWORD *)(v7 + 28);
      *(_DWORD *)(v3 + 4) = v4;
      *(_DWORD *)(v3 + 44) = v8;
      if ( a3 - 4 > 1 )
      {
        if ( v4 == 11 )
        {
          v9 = *(unsigned __int16 *)(v7 + 24);
        }
        else if ( v4 == 4 )
        {
LABEL_21:
          v9 = *(unsigned __int16 *)(a1 + 120);
        }
        else
        {
          v9 = *(unsigned __int16 *)(a1 + 88);
        }
        *(_QWORD *)(v3 + 56) = v9;
      }
      return 1;
    default:
      if ( under_debugger )
        BUG();
      a1 = 20101;
      interr(20101);
      goto LABEL_21;
  }
}
