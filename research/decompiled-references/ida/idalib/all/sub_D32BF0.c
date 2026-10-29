__int64 __fastcall sub_D32BF0(__int64 a1, int a2, unsigned int a3)
{
  _QWORD *v4; // rbx
  _WORD *v5; // rbx
  _DWORD *v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rax
  _BYTE *v9; // rbx

  switch ( a2 )
  {
    case 0:
    case 1:
    case 10:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v9 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 1168) + 8LL * a3)
                     + *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1168) + 8LL * a3) + 32LL) + 24LL)
                     + 40LL);
        *(_BYTE *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = *v9;
      }
      break;
    case 2:
    case 3:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v5 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1168) + 8LL * a3)
                     + *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1168) + 8LL * a3) + 32LL) + 24LL)
                     + 40LL);
        *(_WORD *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = *v5;
      }
      break;
    case 4:
    case 5:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v6 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1168) + 8LL * a3)
                      + *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1168) + 8LL * a3) + 32LL) + 24LL)
                      + 40LL);
        *(_DWORD *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = *v6;
      }
      break;
    case 6:
    case 7:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v4 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1168) + 8LL * a3)
                      + *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1168) + 8LL * a3) + 32LL) + 24LL)
                      + 40LL);
        *(_QWORD *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = *v4;
      }
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
        goto LABEL_18;
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
        goto LABEL_18;
      break;
    case 11:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
        sub_D0BA90(
          *(_QWORD *)(a1 + 560),
          *(_QWORD *)(*(_QWORD *)(a1 + 1168) + 8LL * a3)
        + *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1168) + 8LL * a3) + 32LL) + 24LL)
        + 40LL);
      break;
    case 12:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
LABEL_18:
        *(__m128i *)sub_E216C0(*(_QWORD *)(a1 + 560), 16) = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(*(_QWORD *)(a1 + 1168) + 8LL * a3)
                                                                                            + *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1168) + 8LL * a3) + 32LL) + 24LL)
                                                                                            + 40LL));
      break;
    case 13:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 1168) + 8LL * a3)
           + *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1168) + 8LL * a3) + 32LL) + 24LL)
           + 40LL;
        v8 = sub_E216C0(*(_QWORD *)(a1 + 560), 48);
        sub_E231E0(v8, v7);
      }
      break;
    case 14:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
        sub_D32BB0(
          *(_QWORD *)(a1 + 560),
          *(_QWORD *)(*(_QWORD *)(a1 + 1168) + 8LL * a3)
        + *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1168) + 8LL * a3) + 32LL) + 24LL)
        + 40LL);
      break;
  }
  return 1;
}
