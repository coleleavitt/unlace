__int64 __fastcall sub_37A0(__int64 a1)
{
  const char *v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rbp
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int16 v14; // ax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int16 v29; // ax
  __int64 v31; // [rsp+0h] [rbp-58h]
  __int64 v32; // [rsp+0h] [rbp-58h]
  __int64 v33; // [rsp+0h] [rbp-58h]
  __int64 v34; // [rsp+0h] [rbp-58h]
  __int64 v35; // [rsp+8h] [rbp-50h] BYREF
  __int64 v36; // [rsp+10h] [rbp-48h] BYREF
  __int64 v37; // [rsp+18h] [rbp-40h]
  unsigned __int16 v38; // [rsp+28h] [rbp-30h]
  _WORD v39[2]; // [rsp+34h] [rbp-24h] BYREF
  unsigned __int64 v40; // [rsp+38h] [rbp-20h]

  v1 = "$ IDALDR node for unload $";
  v40 = __readfsqword(0x28u);
  netnode_check(&v35, "$ IDALDR node for unload $", 0, 0);
  if ( a1 )
  {
    if ( v35 == -1 )
    {
      v13 = 0;
LABEL_12:
      v14 = getinf(12, v1, v2, v3, v4, v5, v31, v35, v36, v37);
      sub_3670(-v14, 0, v35);
      v19 = getinf(22, 0, v15, v16, v17, v18, v32, v35, v36, v37);
      v24 = getinf(21, 0, v20, v21, v22, v23, v33, v35, v36, v37);
      LODWORD(v12) = base2file(a1, v13, v24, v19);
      v29 = getinf(12, v13, v25, v26, v27, v28, v34, v35, v36, v37);
      sub_3670(v29, 0, v35);
      return (unsigned int)v12;
    }
    netnode_valobj(v35, &v36, 28);
    if ( qfwrite(a1, &v36, 28) == 28 )
    {
      if ( !HIWORD(v36) )
      {
LABEL_16:
        v1 = (const char *)(16 * (unsigned int)(unsigned __int16)v37);
        v13 = (int)v1;
        if ( !(unsigned int)sub_2870(a1, (unsigned int)v1) )
        {
          LODWORD(v12) = 0;
          return (unsigned int)v12;
        }
        goto LABEL_12;
      }
      if ( (unsigned int)sub_2870(a1, v38) )
      {
        v6 = 65;
        v9 = netnode_supfirst(v35, 65);
        if ( v9 != -1 )
        {
          while ( 1 )
          {
            v39[1] = (v9 >> 4) - getinf(12, v6, v7, v8, v10, v11, v31, v35, v36, v37);
            v39[0] = v9 & 0xF;
            if ( qfwrite(a1, v39, 4) != 4 )
              goto LABEL_10;
            v6 = v9;
            v9 = netnode_supnext(v35, v9, 65);
            if ( v9 == -1 )
              goto LABEL_16;
          }
        }
        goto LABEL_16;
      }
    }
LABEL_10:
    LODWORD(v12) = 0;
    return (unsigned int)v12;
  }
  LODWORD(v12) = 1;
  if ( v35 != -1 )
    return netnode_altval(v35, -1, 65) == 2;
  return (unsigned int)v12;
}

