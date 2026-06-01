/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140038E60
// Address: 0x0000000140038E60

//----- (0000000140038E60) ----------------------------------------------------
unsigned __int64 __fastcall sub_140038E60(_JBTYPE *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  unsigned __int64 result; // rax
  __int16 v7; // cx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int16 v10; // cx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  bool v13; // cf
  bool v14; // sf
  bool v15; // of
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int16 v18; // cx
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  bool v21; // zf
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int16 v24; // cx
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int16 v29; // cx
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  char v32[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v33; // [rsp+28h] [rbp-48h]
  char v34[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v35; // [rsp+38h] [rbp-38h]
  char v36[8]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v37; // [rsp+48h] [rbp-28h]
  char v38[8]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v39; // [rsp+58h] [rbp-18h]
  char v40[8]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v41; // [rsp+68h] [rbp-8h]

  sub_140038DA0(a1, a2, a3);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          result = a1[39].Part[0];
          v32[0] = 1;
          v33 = 0;
          v7 = *(_WORD *)(result + 24);
          if ( v7 != 15933 )
            break;
          LOBYTE(v5) = 1;
          sub_140038B10(a1, (__int64)v32, v5);
          v8 = v33;
          while ( 1 )
          {
            while ( 1 )
            {
              v9 = a1[39].Part[0];
              v34[0] = 1;
              v35 = 0;
              v10 = *(_WORD *)(v9 + 24);
              if ( v10 != 15934 )
                break;
              LOBYTE(v5) = 1;
              sub_140038B10(a1, (__int64)v34, v5);
              if ( v32[0] )
                v8 = (unsigned __int64)v33 >> v35;
              else
                v8 = v33 >> v35;
              v33 = v8;
            }
            if ( v10 != 15420 )
              break;
            LOBYTE(v5) = 1;
            sub_140038B10(a1, (__int64)v34, v5);
            v8 = v33 << v35;
            v33 <<= v35;
          }
          v11 = 0;
          if ( *(_BYTE *)a2 )
          {
            v12 = *(_QWORD *)(a2 + 8);
            *(_BYTE *)a2 = 0;
            LOBYTE(v11) = v12 >= v8;
            *(_QWORD *)(a2 + 8) = v11;
          }
          else
          {
            if ( v32[0] )
            {
              v13 = *(_QWORD *)(a2 + 8) < v8;
              *(_BYTE *)a2 = 0;
              LOBYTE(v11) = !v13;
            }
            else
            {
              v15 = __OFSUB__(*(_QWORD *)(a2 + 8), v8);
              v14 = (__int64)(*(_QWORD *)(a2 + 8) - v8) < 0;
              *(_BYTE *)a2 = 0;
              LOBYTE(v11) = v14 == v15;
            }
            *(_QWORD *)(a2 + 8) = v11;
          }
        }
        if ( v7 != 15421 )
          break;
        LOBYTE(v5) = 1;
        sub_140038B10(a1, (__int64)v32, v5);
        v16 = v33;
        while ( 1 )
        {
          while ( 1 )
          {
            v17 = a1[39].Part[0];
            v36[0] = 1;
            v37 = 0;
            v18 = *(_WORD *)(v17 + 24);
            if ( v18 != 15934 )
              break;
            LOBYTE(v5) = 1;
            sub_140038B10(a1, (__int64)v36, v5);
            if ( v32[0] )
              v16 = (unsigned __int64)v33 >> v37;
            else
              v16 = v33 >> v37;
            v33 = v16;
          }
          if ( v18 != 15420 )
            break;
          LOBYTE(v5) = 1;
          sub_140038B10(a1, (__int64)v36, v5);
          v16 = v33 << v37;
          v33 <<= v37;
        }
        v19 = 0;
        if ( *(_BYTE *)a2 )
        {
          v20 = *(_QWORD *)(a2 + 8);
          *(_BYTE *)a2 = 0;
          LOBYTE(v19) = v20 <= v16;
          *(_QWORD *)(a2 + 8) = v19;
        }
        else
        {
          if ( v32[0] )
          {
            v13 = *(_QWORD *)(a2 + 8) < v16;
            v21 = *(_QWORD *)(a2 + 8) == v16;
            *(_BYTE *)a2 = 0;
            LOBYTE(v19) = v13 || v21;
          }
          else
          {
            v15 = __OFSUB__(*(_QWORD *)(a2 + 8), v16);
            v21 = *(_QWORD *)(a2 + 8) == v16;
            v14 = (__int64)(*(_QWORD *)(a2 + 8) - v16) < 0;
            *(_BYTE *)a2 = 0;
            LOBYTE(v19) = v14 ^ v15 | v21;
          }
          *(_QWORD *)(a2 + 8) = v19;
        }
      }
      if ( v7 != 60 )
        break;
      LOBYTE(v5) = 1;
      sub_140038B10(a1, (__int64)v32, v5);
      v22 = v33;
      while ( 1 )
      {
        while ( 1 )
        {
          v23 = a1[39].Part[0];
          v38[0] = 1;
          v39 = 0;
          v24 = *(_WORD *)(v23 + 24);
          if ( v24 != 15934 )
            break;
          LOBYTE(v5) = 1;
          sub_140038B10(a1, (__int64)v38, v5);
          if ( v32[0] )
            v22 = (unsigned __int64)v33 >> v39;
          else
            v22 = v33 >> v39;
          v33 = v22;
        }
        if ( v24 != 15420 )
          break;
        LOBYTE(v5) = 1;
        sub_140038B10(a1, (__int64)v38, v5);
        v22 = v33 << v39;
        v33 <<= v39;
      }
      v25 = 0;
      if ( *(_BYTE *)a2 )
      {
        v26 = *(_QWORD *)(a2 + 8);
        *(_BYTE *)a2 = 0;
        LOBYTE(v25) = v26 < v22;
        *(_QWORD *)(a2 + 8) = v25;
      }
      else
      {
        if ( v32[0] )
        {
          v13 = *(_QWORD *)(a2 + 8) < v22;
          *(_BYTE *)a2 = 0;
          LOBYTE(v25) = v13;
        }
        else
        {
          v15 = __OFSUB__(*(_QWORD *)(a2 + 8), v22);
          v14 = (__int64)(*(_QWORD *)(a2 + 8) - v22) < 0;
          *(_BYTE *)a2 = 0;
          LOBYTE(v25) = v14 ^ v15;
        }
        *(_QWORD *)(a2 + 8) = v25;
      }
    }
    if ( v7 != 62 )
      break;
    LOBYTE(v5) = 1;
    sub_140038B10(a1, (__int64)v32, v5);
    v27 = v33;
    while ( 1 )
    {
      while ( 1 )
      {
        v28 = a1[39].Part[0];
        v40[0] = 1;
        v41 = 0;
        v29 = *(_WORD *)(v28 + 24);
        if ( v29 != 15934 )
          break;
        LOBYTE(v5) = 1;
        sub_140038B10(a1, (__int64)v40, v5);
        if ( v32[0] )
          v27 = (unsigned __int64)v33 >> v41;
        else
          v27 = v33 >> v41;
        v33 = v27;
      }
      if ( v29 != 15420 )
        break;
      LOBYTE(v5) = 1;
      sub_140038B10(a1, (__int64)v40, v5);
      v27 = v33 << v41;
      v33 <<= v41;
    }
    v30 = 0;
    if ( *(_BYTE *)a2 )
    {
      v31 = *(_QWORD *)(a2 + 8);
      *(_BYTE *)a2 = 0;
      LOBYTE(v30) = v31 > v27;
      *(_QWORD *)(a2 + 8) = v30;
    }
    else
    {
      if ( v32[0] )
      {
        v13 = *(_QWORD *)(a2 + 8) < v27;
        v21 = *(_QWORD *)(a2 + 8) == v27;
        *(_BYTE *)a2 = 0;
        LOBYTE(v30) = !v13 && !v21;
      }
      else
      {
        v15 = __OFSUB__(*(_QWORD *)(a2 + 8), v27);
        v21 = *(_QWORD *)(a2 + 8) == v27;
        v14 = (__int64)(*(_QWORD *)(a2 + 8) - v27) < 0;
        *(_BYTE *)a2 = 0;
        LOBYTE(v30) = !(v14 ^ v15 | v21);
      }
      *(_QWORD *)(a2 + 8) = v30;
    }
  }
  return result;
}
// 140038ED7: variable 'v5' is possibly undefined
