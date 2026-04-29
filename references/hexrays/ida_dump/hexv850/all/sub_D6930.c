__int64 __fastcall sub_D6930(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  char v9; // al
  __int64 i; // [rsp+10h] [rbp-A0h] BYREF
  _QWORD v12[2]; // [rsp+18h] [rbp-98h] BYREF
  __int64 v13; // [rsp+28h] [rbp-88h] BYREF
  __int128 v14; // [rsp+30h] [rbp-80h]
  _QWORD v15[2]; // [rsp+48h] [rbp-68h] BYREF
  __int64 v16; // [rsp+58h] [rbp-58h] BYREF
  __int64 v17; // [rsp+60h] [rbp-50h]
  unsigned __int64 v18; // [rsp+70h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v14 = 0;
  v12[0] = 0;
  v12[1] = 0;
  v13 = 0;
  sub_11F2E0(a1, v12, a2, 0, 4294901760LL);
  for ( i = *a3; i; i = *(_QWORD *)(i + 16) )
  {
    v5 = sub_124880(a1, a2, &i, 0);
    v6 = v5;
    if ( !v5 )
      break;
    if ( !*(_BYTE *)(v5 + 64) )
      goto LABEL_16;
    sub_122E60(v15, a1, v5, 0);
    if ( (unsigned __int8)sub_5FDA0(v12, v15) )
    {
      v9 = sub_312680(&v16, &v13);
      v7 = v16;
      if ( v9 )
      {
        if ( v16 )
        {
          v17 = 0;
          qfree(v16);
        }
        qfree(v15[0]);
LABEL_16:
        *a3 = i;
        goto LABEL_9;
      }
      if ( v16 )
      {
LABEL_6:
        v17 = 0;
        qfree(v7);
      }
    }
    else
    {
      v7 = v16;
      if ( v16 )
        goto LABEL_6;
    }
    qfree(v15[0]);
  }
  v6 = 0;
LABEL_9:
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  qfree(v12[0]);
  return v6;
}
