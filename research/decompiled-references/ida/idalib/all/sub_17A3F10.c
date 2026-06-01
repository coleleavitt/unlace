void __fastcall sub_17A3F10(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12

  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 58 <= 3
      && (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0
      && (*(_BYTE *)(a2 + 75) & 1) == 0 )
    {
      v2 = sub_B8E970(a2 + 64);
      if ( v2 )
      {
        v3 = 0;
        while ( 1 )
        {
          if ( (*(_BYTE *)(v2 + 28) & 0x7Fu) - 18 > 0x3F || !sub_B72A20(v2, *(_QWORD *)(a1 + 232)) )
            goto LABEL_9;
          if ( v3 )
          {
            sub_183B540(a1, *(unsigned int *)(v2 + 24));
LABEL_9:
            v2 = *(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v2 )
              return;
          }
          else
          {
            v3 = v2;
            v2 = *(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v2 )
              return;
          }
        }
      }
    }
  }
}
