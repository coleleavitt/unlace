__int64 __fastcall sub_9513F0(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, __int64, __int64, __int64),
        __int64 a4)
{
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rax
  unsigned int *v10; // rsi
  unsigned int v11; // ebp
  __int64 v12; // rbx
  char v13; // al
  __int64 v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rsi
  char v19; // r14
  unsigned __int8 **v21; // r14
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  int v26; // [rsp+8h] [rbp-110h]
  unsigned int v27; // [rsp+8h] [rbp-110h]
  __int64 v28; // [rsp+18h] [rbp-100h] BYREF
  void *v29[2]; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v30; // [rsp+30h] [rbp-E8h] BYREF
  void *v31[2]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v32; // [rsp+50h] [rbp-C8h] BYREF
  unsigned int v33[8]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+80h] [rbp-98h]
  int v35; // [rsp+90h] [rbp-88h]
  _QWORD v36[6]; // [rsp+A0h] [rbp-78h] BYREF
  int v37; // [rsp+D0h] [rbp-48h]

  v6 = *(_QWORD *)(a1 + 184);
  v7 = sub_A1A5A0(v6, 56);
  sub_A1C070(v33, v7);
  sub_A1A5E0(v6, 56);
  v8 = *(_QWORD *)(a1 + 184);
  v9 = sub_A1A5A0(v8, 56);
  sub_A1C070(v36, v9);
  sub_A1A5E0(v8, 56);
  v10 = v33;
  v11 = sub_A1CE20(v36, v33);
  if ( (_BYTE)v11 )
  {
    v12 = *(_QWORD *)(a1 + 184);
    if ( v37 == 1 )
    {
      v14 = v36[4] + v36[0];
      if ( v35 != 1 )
      {
LABEL_5:
        v27 = v14;
        v15 = sub_8E9400((__int64)v33);
        v14 = v27;
        v16 = v15;
        v17 = v33[0];
        if ( (_BYTE)v16 )
        {
          LOBYTE(v10) = v27 != -1;
          v18 = (unsigned int)(2 * (_DWORD)v10);
          goto LABEL_8;
        }
LABEL_6:
        v16 = v17;
        v18 = 2;
        if ( (unsigned int)v14 < v17 )
        {
LABEL_8:
          v19 = a3(a4, v18, v14, v16);
          *(_BYTE *)sub_A1A4E0(v12, 8) = v19;
          goto LABEL_9;
        }
LABEL_7:
        v18 = (unsigned int)v16 < (unsigned int)v14 ? 3 : 0;
        goto LABEL_8;
      }
    }
    else
    {
      v26 = v35;
      v13 = sub_8E9400((__int64)v36);
      v14 = v36[0];
      if ( v13 )
      {
        if ( v26 == 1 )
        {
          v14 = 0xFFFFFFFFLL;
          v16 = v33[0] + (unsigned int)v34;
        }
        else
        {
          v18 = 0;
          if ( (unsigned __int8)sub_8E9400((__int64)v33) )
            goto LABEL_8;
          v16 = v33[0];
          v14 = 0xFFFFFFFFLL;
        }
        goto LABEL_7;
      }
      if ( v26 != 1 )
        goto LABEL_5;
    }
    v17 = v34 + v33[0];
    goto LABEL_6;
  }
  v28 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
  v21 = (unsigned __int8 **)sub_A2E0C0(a1, &v28, 2271, 0);
  v22 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  sub_A248F0(v29, v36, v22);
  if ( v21 )
  {
    sub_838D50(v21, (_BYTE *)v29[0], (size_t)v29[1]);
    v23 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    sub_A248F0(v31, v33, v23);
    sub_838D50(v21, (_BYTE *)v31[0], (size_t)v31[1]);
  }
  else
  {
    v24 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    sub_A248F0(v31, v33, v24);
  }
  if ( v31[0] != &v32 )
    operator delete(v31[0], v32 + 1);
  if ( v29[0] != &v30 )
    operator delete(v29[0], v30 + 1);
LABEL_9:
  sub_A1C0C0(v36);
  sub_A1C0C0(v33);
  return v11;
}

