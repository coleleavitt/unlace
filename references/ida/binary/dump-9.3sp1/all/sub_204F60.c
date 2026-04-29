unsigned __int64 __fastcall sub_204F60(__int64 a1, __int64 *a2, _QWORD *a3)
{
  _QWORD *v3; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // r9d
  _QWORD *v11; // rdx
  __int64 i; // rbx
  int v13; // r8d
  int v14; // r9d
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20[2]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+10h] [rbp-98h] BYREF
  __int64 v22; // [rsp+18h] [rbp-90h]
  __int64 (__fastcall **v23)(); // [rsp+30h] [rbp-78h] BYREF
  __int64 v24; // [rsp+38h] [rbp-70h]
  __int64 v25; // [rsp+40h] [rbp-68h] BYREF
  __int128 v26; // [rsp+48h] [rbp-60h]
  char v27; // [rsp+58h] [rbp-50h]
  __int64 *v28; // [rsp+60h] [rbp-48h]
  __int64 v29; // [rsp+68h] [rbp-40h]
  unsigned __int64 v30; // [rsp+78h] [rbp-30h]

  v3 = (_QWORD *)*a3;
  v30 = __readfsqword(0x28u);
  if ( v3 )
  {
    if ( a3[1] )
    {
      v5 = (_QWORD *)v3[1];
      if ( v3 != v5 )
      {
        while ( 1 )
        {
LABEL_4:
          if ( !v5[4] )
          {
            v6 = *(_QWORD *)(a1 + 16);
            v23 = nullptr;
            v24 = 0;
            v25 = 0;
            v26 = 0;
            sub_103D60((__int64)(v5 + 3), *(_QWORD *)(v6 + 64), (__int64)&v23);
            sub_64640(a2, (__int64 *)&v23, v7, v8, v9, v10);
            sub_317C60(a2 + 2, &v25);
            if ( v25 )
            {
              *(_QWORD *)&v26 = 0;
              qfree(v25);
            }
            qfree((__int64)v23);
          }
          if ( (*v5 & 2) != 0 )
            goto LABEL_11;
          v11 = (_QWORD *)v5[2];
          if ( (*(_BYTE *)v11 & 2) != 0 )
          {
            v17 = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFFCLL);
            v18 = *v17;
            if ( (*v17 & 2) == 0 )
            {
              while ( v5 == (_QWORD *)v17[2] )
              {
                v5 = v17;
                v19 = v18 & 0xFFFFFFFFFFFFFFFCLL;
                v18 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v18 & 2) != 0 )
                {
                  v5 = (_QWORD *)v19;
                  if ( *a3 != v19 )
                    goto LABEL_4;
                  goto LABEL_12;
                }
                v17 = (_QWORD *)v19;
              }
            }
            v5 = v17;
            if ( (_QWORD *)*a3 == v17 )
              break;
          }
          else
          {
            do
            {
              v5 = v11;
              v11 = (_QWORD *)v11[1];
            }
            while ( (*(_BYTE *)v11 & 2) == 0 );
LABEL_11:
            if ( (_QWORD *)*a3 == v5 )
              break;
          }
        }
      }
    }
  }
LABEL_12:
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL); i; i = *(_QWORD *)(i + 16) )
  {
    if ( (unsigned __int8)sub_64880(a2) && !a2[3] )
      break;
    if ( *(char *)(i + 4) >= 0 )
    {
      sub_127A20((__int64)v20, *(_QWORD *)(a1 + 16), i, 129, v13, v14);
      if ( (unsigned __int8)sub_64780(a2, v20) || (unsigned __int8)sub_318470(a2 + 2, &v21) )
      {
        v16 = *(_QWORD *)(a1 + 16);
        v24 = 0;
        v26 = 0u;
        v27 = 0;
        v23 = &off_4DEE80;
        v28 = a2;
        v29 = a1 + 80;
        v25 = v16;
        sub_11E900((_BYTE *)i, (__int64)&v23);
        if ( v21 )
        {
          v22 = 0;
          qfree(v21);
        }
      }
      else if ( v21 )
      {
        v22 = 0;
        qfree(v21);
      }
      qfree(v20[0]);
    }
  }
  return v30 - __readfsqword(0x28u);
}
