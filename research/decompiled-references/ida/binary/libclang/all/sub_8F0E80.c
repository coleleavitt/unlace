__int64 __fastcall sub_8F0E80(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rbp
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 *v17; // rax
  __int64 v18; // rax
  _QWORD v19[3]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+18h] [rbp-A0h]
  unsigned int v21; // [rsp+20h] [rbp-98h]
  int v22; // [rsp+30h] [rbp-88h]
  _DWORD v23[6]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v24[3]; // [rsp+58h] [rbp-60h] BYREF
  int v25; // [rsp+70h] [rbp-48h]

  v3 = 1;
  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
  {
    v5 = *(_QWORD *)(a1 + 568);
    v6 = *(_QWORD *)(a1 + 792);
    *(_QWORD *)(a1 + 800) = *a3;
    v7 = sub_A1A5A0(v5, 56);
    sub_A1C070(v23, v7);
    sub_A1A5E0(v5, 56);
    v3 = sub_9D4FE0(a1 + 384, v6, v23, 0);
    if ( (_BYTE)v3 )
    {
      if ( v25 )
      {
        v8 = *(_QWORD *)(a1 + 568);
        v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 104LL))(*(_QWORD *)(a1 + 408));
        v10 = sub_A1D2E0(v24, v9, a2);
        v12 = v11;
        v13 = sub_A1A4E0(v8, 56);
        *(_QWORD *)v13 = 0;
        *(_DWORD *)(v13 + 48) = 1;
        *(_QWORD *)(v13 + 24) = v10;
        *(_QWORD *)(v13 + 32) = v12;
        *(_OWORD *)(v13 + 8) = 0;
LABEL_6:
        sub_A1C0C0(v23);
        return v3;
      }
      if ( (unsigned __int8)sub_9D71E0(a1 + 384, v6, v23, 0) )
      {
        v3 = 0;
        sub_A1C030(v19, v24[0], a2 + v23[0], a2 + v23[0]);
        if ( !v22 )
        {
          if ( v20 )
          {
            v14 = v20;
            v15 = *(_QWORD *)(v20 + 32);
            if ( (unsigned __int64)*(unsigned int *)(v15 + 20) >= v19[0] )
            {
              v16 = v21;
              if ( v21 != 0 && *(_DWORD *)(v15 + 16) != v21 )
              {
                v17 = (__int64 *)sub_8E5480((__int64)v19);
                LOBYTE(v3) = ~(*v17 >> 1) & ((unsigned __int64)*v17 > 3);
                if ( (_BYTE)v3 )
                {
                  if ( (*(_BYTE *)(v14 + v16 + 28) & 4) != 0 )
                  {
                    v18 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 56);
                    sub_A1BFE0(v18, v19);
                  }
                  else
                  {
                    v3 = 0;
                  }
                }
              }
            }
          }
        }
        sub_A1C0C0(v19);
        goto LABEL_6;
      }
    }
    v3 = 0;
    goto LABEL_6;
  }
  return v3;
}

