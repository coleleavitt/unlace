__int64 __fastcall sub_51C20(__int64 a1, __int64 *a2)
{
  __int16 v2; // ax
  __int64 v4; // r14
  int v5; // edx
  __int64 v6; // rax
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  const char *v12; // r12
  _BYTE *v13; // rax
  _WORD *v14; // rax
  __int16 v15; // dx
  __int128 v16; // [rsp+0h] [rbp-68h] BYREF
  __int64 v17; // [rsp+10h] [rbp-58h] BYREF
  char v18; // [rsp+18h] [rbp-50h]
  __int128 v19; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v2 = sub_97BF0(a2);
  if ( v2 == 13 )
  {
    v16 = 0;
    if ( (unsigned __int8)sub_945B0(a2, &v16, 63) && (unsigned __int8)sub_97360(a2, &v16) )
    {
      v4 = sub_87DA0(a2);
      v18 = 0;
      v17 = 0;
      v19 = 0;
      if ( (unsigned __int8)sub_945B0(v4, &v19, 19) )
      {
        if ( (unsigned __int8)sub_96D10(v4, &v17, &v19) )
        {
          v14 = word_ABD50;
          v15 = word_ABD50[0];
          if ( word_ABD50[0] )
          {
            while ( (_WORD)v17 != v15 )
            {
              v15 = v14[1];
              ++v14;
              if ( !v15 )
                goto LABEL_10;
            }
            sub_84A10(&v19);
            goto LABEL_7;
          }
        }
      }
LABEL_10:
      sub_84A10(&v19);
    }
    sub_50800(a1, a2, 0);
LABEL_7:
    sub_84A10(&v16);
    return 0;
  }
  if ( v2 == 28 )
  {
    if ( (unsigned int)sub_97890(a2) )
    {
      if ( (debug & 0x400000) != 0 )
      {
        v7 = sub_81C40(a2);
        sub_88B80((unsigned int)"Virtually-inherited type @ %s is not supported.\n", v7, v8, v9, v10, v11);
      }
      *(_BYTE *)(*(_QWORD *)(a1 + 32) + 412LL) |= 0x10u;
    }
    else
    {
      sub_50800(a1, a2, 1);
    }
  }
  else if ( v2 == 46 && !(unsigned __int8)sub_97710(a2) )
  {
    v5 = sub_97890(a2);
    v6 = *(_QWORD *)(a1 + 32);
    if ( v5 )
    {
LABEL_17:
      *(_BYTE *)(v6 + 412) |= 0x20u;
      return 0;
    }
    if ( (unsigned __int8)sub_84C30(v6 + 8) )
    {
      v12 = (const char *)sub_9AC00(*(_QWORD *)(a1 + 32) + 8LL);
      v13 = (_BYTE *)sub_986B0(a2);
      if ( v12 )
      {
        if ( v13 && !strcmp(v12, &v13[*v13 == 126]) )
        {
          v6 = *(_QWORD *)(a1 + 32);
          goto LABEL_17;
        }
      }
    }
  }
  return 0;
}
