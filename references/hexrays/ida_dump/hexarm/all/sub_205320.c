unsigned __int64 __fastcall sub_205320(__int64 a1, __int64 *a2, _QWORD *a3)
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
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  _QWORD v18[2]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+10h] [rbp-98h] BYREF
  __int64 v20; // [rsp+18h] [rbp-90h]
  __int64 (__fastcall **v21)(); // [rsp+30h] [rbp-78h] BYREF
  __int64 v22; // [rsp+38h] [rbp-70h]
  __int64 v23; // [rsp+40h] [rbp-68h] BYREF
  __int128 v24; // [rsp+48h] [rbp-60h]
  char v25; // [rsp+58h] [rbp-50h]
  __int64 *v26; // [rsp+60h] [rbp-48h]
  __int64 v27; // [rsp+68h] [rbp-40h]
  unsigned __int64 v28; // [rsp+78h] [rbp-30h]

  v3 = (_QWORD *)*a3;
  v28 = __readfsqword(0x28u);
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
            v21 = nullptr;
            v22 = 0;
            v23 = 0;
            v24 = 0;
            sub_1037A0((__int64)(v5 + 3), *(_QWORD *)(v6 + 64), (__int64)&v21);
            sub_64040(a2, (__int64 *)&v21, v7, v8, v9, v10);
            sub_318020(a2 + 2, &v23);
            if ( v23 )
            {
              *(_QWORD *)&v24 = 0;
              qfree(v23);
            }
            qfree(v21);
          }
          if ( (*v5 & 2) != 0 )
            goto LABEL_11;
          v11 = (_QWORD *)v5[2];
          if ( (*(_BYTE *)v11 & 2) != 0 )
          {
            v15 = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFFCLL);
            v16 = *v15;
            if ( (*v15 & 2) == 0 )
            {
              while ( v5 == (_QWORD *)v15[2] )
              {
                v5 = v15;
                v17 = v16 & 0xFFFFFFFFFFFFFFFCLL;
                v16 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v16 & 2) != 0 )
                {
                  v5 = (_QWORD *)v17;
                  if ( *a3 != v17 )
                    goto LABEL_4;
                  goto LABEL_12;
                }
                v15 = (_QWORD *)v17;
              }
            }
            v5 = v15;
            if ( (_QWORD *)*a3 == v15 )
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
    if ( (unsigned __int8)sub_64280(a2) && !a2[3] )
      break;
    if ( *(char *)(i + 4) >= 0 )
    {
      sub_127460((__int64)v18, *(_QWORD *)(a1 + 16), i, 0x81u);
      if ( (unsigned __int8)sub_64180(a2, v18) || (unsigned __int8)sub_318830(a2 + 2, &v19) )
      {
        v14 = *(_QWORD *)(a1 + 16);
        v22 = 0;
        v24 = 0u;
        v25 = 0;
        v21 = &off_4D9540;
        v26 = a2;
        v27 = a1 + 80;
        v23 = v14;
        sub_11E340((_BYTE *)i, (__int64)&v21);
        if ( v19 )
        {
          v20 = 0;
          qfree(v19);
        }
      }
      else if ( v19 )
      {
        v20 = 0;
        qfree(v19);
      }
      qfree(v18[0]);
    }
  }
  return v28 - __readfsqword(0x28u);
}
