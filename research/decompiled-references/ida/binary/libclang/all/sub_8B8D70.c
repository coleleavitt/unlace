__int64 __fastcall sub_8B8D70(__int64 *a1, __int64 a2)
{
  __int64 v2; // r14
  char v3; // al
  __int64 v4; // r9
  __int64 result; // rax
  __int64 v6; // rbp
  unsigned __int64 v7; // rcx
  int v8; // r12d
  __int64 v9; // rax
  __int64 *v10; // r15
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 *v13; // rax
  __int64 v14; // rsi
  int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rbx
  unsigned int v18; // eax
  __int64 v19; // [rsp+8h] [rbp-A0h]
  char v20; // [rsp+13h] [rbp-95h]
  unsigned int v21; // [rsp+14h] [rbp-94h]
  __int64 v22; // [rsp+18h] [rbp-90h]
  __int64 v23[2]; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v24; // [rsp+30h] [rbp-78h] BYREF
  char v25; // [rsp+34h] [rbp-74h]

  v2 = *a1;
  v3 = *(_BYTE *)(*a1 + 963);
  *(_BYTE *)(*a1 + 963) = 0;
  v4 = *(_QWORD *)(a2 + 16);
  v20 = v3;
  if ( *(_DWORD *)(v4 + 4) )
  {
    v6 = *(_QWORD *)(*a1 + 32);
    v19 = *a1;
    v21 = *(_DWORD *)(*a1 + 320);
    v7 = *(unsigned int *)(v6 + 196);
    v8 = *(_DWORD *)(v6 + 208) + 1;
    v9 = *(unsigned int *)(v6 + 192);
    *(_DWORD *)(v6 + 208) = v8;
    if ( v7 < v9 + 1 )
    {
      v22 = v4;
      sub_25D6060(v6 + 184, v6 + 200, v9 + 1, 4);
      v9 = *(unsigned int *)(v6 + 192);
      v4 = v22;
    }
    v10 = (__int64 *)(v4 + 24);
    *(_DWORD *)(*(_QWORD *)(v6 + 184) + 4 * v9) = v8;
    ++*(_DWORD *)(v6 + 192);
    v11 = 8LL * *(unsigned int *)(v4 + 4);
    v12 = v4 + v11 + 16;
    if ( v11 == 8 )
    {
      v10 = (__int64 *)(v4 + 16);
LABEL_13:
      if ( ((*(_WORD *)*v10 + 509) & 0x1FFu) <= 0x7F )
      {
        if ( sub_89CD60(a1, *v10) )
        {
          result = sub_8931F0(v19, 1, v21);
LABEL_18:
          --*(_DWORD *)(*(_QWORD *)(v19 + 32) + 192LL);
          goto LABEL_3;
        }
      }
      else
      {
        v16 = sub_AC6DA0(*v10);
        sub_A2E1A0(*a1, v16, 2283, 0);
      }
    }
    else
    {
      while ( 1 )
      {
        v25 &= ~1u;
        v14 = *a1;
        v24 = 0;
        v23[1] = 0;
        v23[0] = (__int64)&v24;
        v15 = sub_88E980(v23, v14, (unsigned __int16 *)*(v10 - 1), nullptr);
        if ( v15 != 2 )
          break;
        if ( v24 <= 1 )
        {
          v13 = v10 + 1;
          if ( v10 + 1 == (__int64 *)v12 )
            goto LABEL_13;
        }
        else
        {
          sub_69F740((__int64)&v24);
          v13 = v10 + 1;
          if ( (__int64 *)v12 == v10 + 1 )
            goto LABEL_13;
        }
        v10 = v13;
      }
      if ( v15 )
      {
        v17 = *a1;
        v18 = sub_AC6DA0(*(v10 - 1));
        sub_A2E1A0(v17, v18, 2283, 0);
      }
      if ( v24 > 1 )
        sub_69F740((__int64)&v24);
    }
    if ( v21 != -1 )
      sub_8931F0(v19, 0, v21);
    result = 0;
    goto LABEL_18;
  }
  result = 1;
LABEL_3:
  *(_BYTE *)(v2 + 963) = v20;
  return result;
}

