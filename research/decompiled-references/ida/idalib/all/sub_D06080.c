__int64 __fastcall sub_D06080(__int64 a1, unsigned int a2, char a3, _QWORD *a4)
{
  unsigned int v4; // ebp
  __int64 v6; // r13
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // r14
  __int64 v16; // rax
  unsigned int v17; // r14d
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD v21[3]; // [rsp+10h] [rbp-98h] BYREF
  int v22; // [rsp+28h] [rbp-80h]
  __int64 v23; // [rsp+30h] [rbp-78h]
  unsigned int v24; // [rsp+38h] [rbp-70h]
  _DWORD v25[8]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v26[9]; // [rsp+60h] [rbp-48h] BYREF

  v4 = 1;
  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v6 = *(_QWORD *)(a1 + 560);
    v8 = *(_QWORD *)(a1 + 1232);
    v9 = a1 + 384;
    *(_QWORD *)(a1 + 1240) = *a4;
    sub_E21760(v6, 48);
    sub_E23260(v25);
    sub_E21790(v6, 48);
    if ( a3 || (unsigned __int8)sub_DC8930(v9, v8, v25, 0) )
    {
      if ( v25[6] )
      {
        v10 = *(_QWORD *)(a1 + 560);
        v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 104LL))(*(_QWORD *)(a1 + 408));
        v12 = v10;
        v4 = 1;
        v13 = sub_E24F10(v26, v11, a2);
        v15 = v14;
        v16 = sub_E216C0(v12, 48);
        *(_QWORD *)v16 = 0;
        *(_DWORD *)(v16 + 24) = 1;
        *(_QWORD *)(v16 + 32) = v13;
        *(_QWORD *)(v16 + 40) = v15;
        *(_OWORD *)(v16 + 8) = 0;
LABEL_6:
        sub_E232A0(v25);
        return v4;
      }
      v17 = sub_DC90B0(v9, v8, v25, 0);
      if ( (_BYTE)v17 )
      {
        v4 = 0;
        sub_E23220(v21, v26[0], v25[0] + a2, v25[0] + a2);
        if ( !v22 )
        {
          v18 = v23;
          if ( !v23 || v21[0] <= (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v23 + 32) + 28LL) )
          {
            v4 = sub_CFE580((__int64)v21);
            if ( (_BYTE)v4 )
            {
              v4 = 0;
            }
            else
            {
              v19 = *(_QWORD *)sub_CFDF60((__int64)v21);
              if ( (v19 & 2) == 0 && (v19 & 0xFFFFFFFFFFFFFFFCLL) != 0 && (*(_BYTE *)(v18 + v24 + 28) & 4) != 0 )
              {
                v4 = v17;
                v20 = sub_E216C0(*(_QWORD *)(a1 + 560), 48);
                sub_E231E0(v20, v21);
              }
            }
          }
        }
        sub_E232A0(v21);
        goto LABEL_6;
      }
    }
    v4 = 0;
    goto LABEL_6;
  }
  return v4;
}
