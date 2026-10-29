char __fastcall sub_1FBD0E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  sub_1FBCEF0(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_BYTE *)(a2 + 88) & 7);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(a2 + 88) & 8) != 0);
  v2 = *(_QWORD *)(a2 + 16);
  if ( (v2 & 4) == 0 || (v2 &= 0xFFFFFFFFFFFFFFF8LL, *(_QWORD *)(v2 + 8) == *(_QWORD *)v2) )
  {
    if ( (*(_BYTE *)(a2 + 29) & 3) == 0 )
    {
      LOBYTE(v2) = sub_B8C400(a2, 0);
      if ( !(_BYTE)v2 && *(char *)(a2 + 28) >= 0 )
      {
        LOBYTE(v2) = sub_B8C090((_BYTE *)a2);
        if ( !(_BYTE)v2 )
        {
          v2 = *(_QWORD *)(a2 + 8) & 7LL;
          if ( v2 != 4 )
          {
            LOBYTE(v2) = *(_BYTE *)(a2 + 68);
            if ( (v2 & 1) == 0 )
              goto LABEL_21;
            v3 = *(_QWORD *)(a2 + 72);
            if ( (v2 & 0xC) != 0xC && (v2 & 0xC) != 0 )
              v3 = *(_QWORD *)(v3 + 8);
            if ( !v3 )
            {
LABEL_21:
              if ( (*(_BYTE *)(a2 + 56) & 4) == 0 && *(_QWORD *)(a2 + 40) )
              {
                LODWORD(v2) = *(_DWORD *)(*(_QWORD *)a1 + 3504LL);
                *(_DWORD *)(a1 + 228) = v2;
              }
            }
          }
        }
      }
    }
  }
  *(_DWORD *)(a1 + 224) = 60;
  return v2;
}
