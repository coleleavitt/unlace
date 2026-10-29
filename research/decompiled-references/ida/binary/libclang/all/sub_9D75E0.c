__int64 __fastcall sub_9D75E0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned int v6; // eax
  unsigned int v7; // ebp
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 *v18; // rax
  __int64 v19; // rax
  _DWORD v20[6]; // [rsp+0h] [rbp-B8h] BYREF
  _QWORD v21[3]; // [rsp+18h] [rbp-A0h] BYREF
  int v22; // [rsp+30h] [rbp-88h]
  _QWORD v23[3]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v24; // [rsp+58h] [rbp-60h]
  unsigned int v25; // [rsp+60h] [rbp-58h]
  int v26; // [rsp+70h] [rbp-48h]

  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v20, v5);
  sub_A1A5E0(v4, 56);
  v6 = sub_9D4FE0(a1, a2, (__int64)v20, 0);
  if ( !(_BYTE)v6 )
    goto LABEL_5;
  if ( v22 )
  {
    v7 = v6;
    v8 = *(_QWORD *)(a1 + 184);
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    v10 = sub_A1D2E0(v21, v9, a3);
    v12 = v11;
    v13 = sub_A1A4E0(v8, 56);
    *(_QWORD *)v13 = 0;
    *(_DWORD *)(v13 + 48) = 1;
    *(_QWORD *)(v13 + 24) = v10;
    *(_QWORD *)(v13 + 32) = v12;
    *(_OWORD *)(v13 + 8) = 0;
    goto LABEL_6;
  }
  if ( !sub_9D71E0(a1, a2, (__int64)v20, 0) )
  {
LABEL_5:
    v7 = 0;
    goto LABEL_6;
  }
  v7 = 0;
  sub_A1C030(v23, v21[0], a3 + v20[0], a3 + v20[0]);
  if ( !v26 )
  {
    if ( v24 )
    {
      v15 = v24;
      v16 = *(_QWORD *)(v24 + 32);
      if ( (unsigned __int64)*(unsigned int *)(v16 + 20) >= v23[0] )
      {
        v17 = v25;
        if ( v25 != 0 && *(_DWORD *)(v16 + 16) != v25 )
        {
          v18 = (__int64 *)sub_8E5480((__int64)v23);
          LOBYTE(v7) = ~(*v18 >> 1) & ((unsigned __int64)*v18 > 3);
          if ( (_BYTE)v7 )
          {
            if ( (*(_BYTE *)(v15 + v17 + 28) & 4) != 0 )
            {
              v19 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
              sub_A1BFE0(v19, v23);
            }
            else
            {
              v7 = 0;
            }
          }
        }
      }
    }
  }
  sub_A1C0C0(v23);
LABEL_6:
  sub_A1C0C0(v20);
  return v7;
}

