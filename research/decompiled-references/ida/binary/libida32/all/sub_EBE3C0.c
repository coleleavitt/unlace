__int64 __fastcall sub_EBE3C0(__int64 *a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v8; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r15
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // r12
  __int64 v34; // r13
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r15
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // [rsp+0h] [rbp-50h]
  __int64 v46; // [rsp+0h] [rbp-50h]
  unsigned __int64 v47; // [rsp+8h] [rbp-48h]
  __int64 v48; // [rsp+10h] [rbp-40h]

  if ( a4 > a1[6] )
    return 1;
  v8 = (__int64)a2;
  result = sub_EB53D0((__int64)a1, (__int64)a2, a4, a4, a5, a6);
  if ( (_BYTE)result )
  {
    v14 = sub_EBA840(*a1, a2, v10, v11, v12, v13);
    v21 = sub_A56850((__int64)a2, (__int64)a2, v15, v16, v17, v18);
    v23 = v19;
    if ( v21 == v19 )
    {
LABEL_8:
      if ( v8 != a3 || (v38 = sub_A56900(v8, (__int64)a2, v19, v20, v21, v22), v48 = v19, v38 == v19) )
      {
LABEL_9:
        v33 = sub_B5ABC0(v8, (__int64)a2, v19, v20, v21, v22);
        if ( v33 )
        {
LABEL_10:
          if ( (*(_BYTE *)(v33 + 68) & 1) == 0 )
          {
            v34 = v33;
            if ( *(char *)(v33 + 29) < 0 )
              v34 = sub_B4E9E0(v33);
            v35 = *(unsigned int *)(v34 + 68);
            if ( (v35 & 0xFFFFFFF0) == 0 )
            {
              sub_B5AD70(v34, (__int64)a2, v35, v30, v31, v32);
              LODWORD(v35) = *(_DWORD *)(v34 + 68);
            }
            v36 = sub_A742B0(*a1, *(_QWORD *)(v14[6] + 8LL * (((unsigned int)v35 >> 4) - 1)));
            a2 = (char *)v33;
            result = sub_EBE290(a1, v33, v36 + a4);
            if ( !(_BYTE)result )
              return result;
          }
          while ( 1 )
          {
            v37 = *(_QWORD *)(v33 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v33 = v37;
            if ( !v37 )
              break;
            if ( (*(_BYTE *)(v37 + 28) & 0x7Fu) - 49 <= 2 )
              goto LABEL_10;
          }
        }
        return 1;
      }
      while ( 1 )
      {
        v39 = sub_EB2840(*(__int64 **)(v38 + 16));
        v46 = sub_F3F530(*(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFF0LL));
        v44 = sub_EB78C0(v14 + 9, v46, v40, v41, v42, v43);
        a2 = (char *)v46;
        result = sub_EBE3C0(a1, v46, a3, v44 + a4);
        if ( !(_BYTE)result )
          break;
        v38 += 24LL;
        if ( v38 == v48 )
          goto LABEL_9;
      }
    }
    else
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(v21 + 12) & 1) == 0 )
        {
          v47 = v21;
          v24 = sub_EB2840(*(__int64 **)(v21 + 16));
          v45 = sub_F3F530(*(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL));
          v29 = sub_EB7560(v14 + 9, v45, v25, v26, v27, v28);
          a2 = (char *)v45;
          result = sub_EBE3C0(a1, v45, a3, v29 + a4);
          v21 = v47;
          if ( !(_BYTE)result )
            break;
        }
        v21 += 24LL;
        if ( v23 == v21 )
          goto LABEL_8;
      }
    }
  }
  return result;
}

