/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_54860
// Address: 0x0000000000054860

//----- (0000000000054860) ----------------------------------------------------
unsigned __int64 __fastcall sub_54860(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 v5; // r15
  __int64 *v6; // rax
  __int64 v7; // r12
  unsigned __int64 v8; // r14
  __int64 **v9; // rbx
  __int64 **v10; // r13
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 *v13; // rax
  __int64 **v14; // rbx
  __int64 **v15; // rbp
  __int64 v16; // rax
  __int64 *v17; // rax
  __int64 v19; // [rsp+0h] [rbp-B8h]
  __int64 v20; // [rsp+18h] [rbp-A0h]
  __int64 v21; // [rsp+20h] [rbp-98h]
  __int64 v22; // [rsp+28h] [rbp-90h]
  _BYTE v23[4]; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v24; // [rsp+34h] [rbp-84h]
  __int128 *v25; // [rsp+38h] [rbp-80h] BYREF
  __int128 v26; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v27[6]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int16 v28; // [rsp+56h] [rbp-62h]
  unsigned int v29; // [rsp+5Ch] [rbp-5Ch]
  unsigned int v30; // [rsp+60h] [rbp-58h]
  __int128 *v31; // [rsp+68h] [rbp-50h] BYREF
  __int128 v32; // [rsp+70h] [rbp-48h] BYREF
  unsigned __int64 v33; // [rsp+80h] [rbp-38h]

  v33 = __readfsqword(0x28u);
  v19 = a1[1];
  v21 = qlseek(*(_QWORD *)(v19 + 472), 0, 1) - *(_QWORD *)(v19 + 480);
  v32 = 0;
  v31 = &v32;
  v20 = a2 + a3;
  if ( a2 + a3 > a2 )
  {
    v4 = 0;
    v5 = a2;
    while ( 1 )
    {
      v14 = (__int64 **)&v32;
      v15 = (__int64 **)&v32;
LABEL_41:
      if ( *v15 )
        break;
LABEL_3:
      v6 = (__int64 *)operator new(0x28u);
      v6[4] = v5;
      *(_OWORD *)v6 = 0;
      v6[2] = (__int64)v14;
      *v15 = v6;
      if ( *(_QWORD *)v31 )
      {
        v31 = *(__int128 **)v31;
        v6 = *v15;
      }
      sub_4A450((__int64 *)v32, v6);
      ++*((_QWORD *)&v32 + 1);
      if ( qlseek(*(_QWORD *)(v19 + 472), v5 + *(_QWORD *)(v19 + 480), 0) == -1
        || !(unsigned __int8)sub_5E980((__int64)v27, a1[1]) )
      {
        break;
      }
      (*(void (__fastcall **)(__int64 *, _BYTE *, __int64, __int64))*a1)(a1, v27, v5 - a2, v4);
      v22 = v4;
      v7 = v5 + v29;
      v26 = 0;
      v25 = &v26;
      if ( v7 >= v20 )
        goto LABEL_28;
      v8 = 0;
      while ( 2 )
      {
        v10 = (__int64 **)&v26;
        v9 = (__int64 **)&v26;
LABEL_21:
        if ( !*v10 )
        {
LABEL_22:
          v13 = (__int64 *)operator new(0x28u);
          v13[4] = v7;
          *(_OWORD *)v13 = 0;
          v13[2] = (__int64)v9;
          *v10 = v13;
          if ( *(_QWORD *)v25 )
          {
            v25 = *(__int128 **)v25;
            v13 = *v10;
          }
          sub_4A450((__int64 *)v26, v13);
          ++*((_QWORD *)&v26 + 1);
          if ( v8 < v28 && qlseek(*(_QWORD *)(v19 + 472), v7 + *(_QWORD *)(v19 + 480), 0) != -1 )
          {
            if ( (unsigned __int8)sub_5EB40((__int64)v23, a1[1]) )
            {
              (*(void (__fastcall **)(__int64 *, _BYTE *, __int64, unsigned __int64))(*a1 + 8))(a1, v23, v7 - a2, v8);
              v7 += v24;
              if ( v7 < v20 )
              {
                ++v8;
                if ( !(_QWORD)v26 )
                  continue;
                v9 = (__int64 **)v26;
                v10 = (__int64 **)&v26;
                while ( 1 )
                {
                  v11 = (__int64)v9[4];
                  if ( v7 >= v11 )
                  {
                    if ( v11 >= v7 )
                      goto LABEL_21;
                    v10 = v9 + 1;
                    v12 = v9[1];
                    if ( !v12 )
                      goto LABEL_21;
                  }
                  else
                  {
                    v12 = *v9;
                    v10 = v9;
                    if ( !*v9 )
                    {
                      v10 = v9;
                      if ( *v9 )
                        goto LABEL_28;
                      goto LABEL_22;
                    }
                  }
                  v9 = (__int64 **)v12;
                }
              }
            }
          }
        }
        break;
      }
LABEL_28:
      v5 += v30;
      sub_5E940((__int64)&v25, (_QWORD *)v26);
      if ( v5 >= v20 )
        break;
      v4 = v22 + 1;
      if ( (_QWORD)v32 )
      {
        v14 = (__int64 **)v32;
        v15 = (__int64 **)&v32;
        while ( 1 )
        {
          v16 = (__int64)v14[4];
          if ( v5 >= v16 )
          {
            if ( v16 >= v5 )
              goto LABEL_41;
            v15 = v14 + 1;
            v17 = v14[1];
            if ( !v17 )
              goto LABEL_41;
          }
          else
          {
            v17 = *v14;
            v15 = v14;
            if ( !*v14 )
            {
              v15 = v14;
              if ( *v14 )
                goto LABEL_42;
              goto LABEL_3;
            }
          }
          v14 = (__int64 **)v17;
        }
      }
    }
  }
LABEL_42:
  sub_5E940((__int64)&v31, (_QWORD *)v32);
  qlseek(*(_QWORD *)(v19 + 472), *(_QWORD *)(v19 + 480) + v21, 0);
  return __readfsqword(0x28u);
}
