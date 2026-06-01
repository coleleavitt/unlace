__int64 __fastcall sub_983990(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned int v5; // ebx
  __int64 v6; // r8
  unsigned __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 *v21; // r15
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // [rsp+8h] [rbp-40h]

  if ( a2 != a3 )
  {
    v3 = a2;
    v5 = 1;
    while ( 1 )
    {
      v14 = *(_QWORD *)(v3 + 88);
      v15 = v14 & 7;
      if ( v15 == 2 )
        break;
      if ( v15 <= 2 )
      {
        if ( (v14 & 7) == 0 )
          goto LABEL_17;
        v6 = *(_QWORD *)(v3 + 80);
        v7 = v14 >> 3;
        if ( (*(_BYTE *)(v3 + 44) & 8) != 0 )
        {
          if ( !(_DWORD)v7 )
            goto LABEL_26;
        }
        else if ( !(_DWORD)v7 )
        {
          v19 = *(unsigned int *)(*(_QWORD *)v3 + 24LL);
          if ( (_DWORD)v19 )
          {
            v20 = v3;
            v21 = (__int64 *)(v6 + 112);
            v24 = v3 + 8 * v19;
            do
            {
              v22 = *(_QWORD *)(v20 + 112);
              if ( *v21 != v22 )
              {
                v23 = sub_983520(a1, v22, *v21);
                LOBYTE(v23) = v23 != 0;
                v5 &= v23;
              }
              v20 += 8;
              ++v21;
            }
            while ( v24 != v20 );
            v3 = *(_QWORD *)(v3 + 80);
            goto LABEL_10;
          }
LABEL_26:
          v3 = *(_QWORD *)(v3 + 80);
          goto LABEL_10;
        }
        v8 = *(_QWORD *)(v3 + 112);
        v9 = *(_QWORD *)(v6 + 120);
        v10 = *(_QWORD *)(v3 + 120);
        v11 = *(_QWORD *)(v6 + 112);
        if ( v9 != v8 )
        {
          v12 = sub_983520(a1, v8, v9);
          LOBYTE(v12) = v12 != 0;
          v5 &= v12;
        }
        if ( v11 == v10 )
        {
LABEL_17:
          v3 = *(_QWORD *)(v3 + 80);
        }
        else
        {
          v13 = sub_983520(a1, v10, v11);
          v3 = *(_QWORD *)(v3 + 80);
          LOBYTE(v13) = v13 != 0;
          v5 &= v13;
        }
LABEL_10:
        if ( a3 == v3 )
          return v5;
      }
      else
      {
        if ( v15 != 3 )
        {
          sub_1872CE0("");
          sub_1873130(114, 1183);
        }
        v16 = sub_9833B0(a1, v14 & 0xFFFFFFFFFFFFFFF8LL);
        v3 = *(_QWORD *)(v3 + 80);
        LOBYTE(v16) = v16 != 0;
        v5 &= v16;
        if ( a3 == v3 )
          return v5;
      }
    }
    v18 = sub_9836E0(a1, v14 >> 3);
    v3 = *(_QWORD *)(v3 + 80);
    LOBYTE(v18) = v18 != 0;
    v5 &= v18;
    goto LABEL_10;
  }
  return 1;
}

