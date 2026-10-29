void __fastcall sub_10B63F0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  char *v5; // rbx
  char *v6; // r15
  __int64 v7; // r14
  __int64 v8; // rax
  unsigned __int8 *v9[17]; // [rsp+8h] [rbp-88h] BYREF

  if ( **(_BYTE **)a1 )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
    LODWORD(v9[0]) = a2;
    v3 = sub_2193060(v2, v9, 1);
    v4 = *(_QWORD *)(v2 + 8);
    v5 = (char *)(v4 + 8LL * (unsigned int)v3);
    v6 = (char *)(v4 + 8 * HIDWORD(v3));
    if ( v5 != v6 )
    {
      if ( a2 )
      {
        while ( !*(_QWORD *)v5 || !(unsigned __int8)sub_2195AD0(*(_QWORD *)v5, a2) )
        {
          v5 += 8;
          if ( v6 == v5 )
            return;
        }
      }
      else
      {
        v5 += 8 * ((unsigned __int64)(v6 - 8 - v5) >> 3) + 8;
      }
      if ( v6 != v5 )
      {
        do
        {
          v7 = *(_QWORD *)v5;
          v8 = *(_QWORD *)(*(_QWORD *)v5 + 16LL);
          if ( !v8 )
            v8 = *(_QWORD *)v5;
          *(_BYTE *)(v8 + 44) |= 1u;
          if ( v5 + 8 == v6 )
            break;
          if ( a2 )
          {
            v5 += 8;
            while ( !*(_QWORD *)v5 || !(unsigned __int8)sub_2195AD0(*(_QWORD *)v5, a2) )
            {
              v5 += 8;
              if ( v6 == v5 )
                goto LABEL_18;
            }
          }
          else
          {
            v5 += 8 * ((unsigned __int64)(v6 - 16 - v5) >> 3) + 16;
          }
        }
        while ( v6 != v5 );
LABEL_18:
        sub_FA3370((__int64)v9, **(_QWORD **)(a1 + 16), 0, 323);
        sub_AC84E0(v9, *(_BYTE **)(v7 + 24), *(_QWORD *)(v7 + 32));
        sub_10B4AF0(v9, (__int64)"-fsycl");
        sub_AC6300((__int64)v9);
      }
    }
  }
}

