__int64 __fastcall sub_744860(unsigned int *a1, unsigned int *a2, __int64 a3, char *a4)
{
  __int64 v5; // rdx
  unsigned __int8 v6; // al
  unsigned __int8 v7; // r15
  char v8; // al
  unsigned int v9; // eax
  char v10; // r15
  unsigned int v11; // esi
  unsigned int *v12; // rdi
  int v13; // eax
  bool v14; // zf
  _DWORD *v15; // rax
  _DWORD *v16; // rbx
  unsigned int v17; // ebp
  int v19; // eax
  __int64 v20; // rdx
  int v21; // [rsp+18h] [rbp-50h] BYREF
  int v22; // [rsp+1Ch] [rbp-4Ch] BYREF
  int v23; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v24; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v5 = (__int64)qword_2CAA5C0++;
  v6 = *(_BYTE *)v5 - 54;
  v7 = v6;
  if ( v6 <= 3u )
  {
    v5 = *a1;
    v21 = 0;
    v22 = v5;
    if ( (v6 & 2) == 0 )
    {
      v10 = 0;
      v11 = dword_2CAA5CC & 0x20;
      goto LABEL_9;
    }
  }
  else
  {
    if ( *(_BYTE *)v5 != 95
      || (qword_2CAA5C0 = (char *)(v5 + 2), v8 = *(_BYTE *)(v5 + 1), v7 = v8 - 61, (unsigned __int8)(v8 - 65) > 3u) )
    {
      sub_74E200(a1, a2, v5, a4);
    }
    v9 = *a1;
    v21 = 0;
    v22 = v9;
    if ( (v7 & 2) == 0 )
    {
      v10 = 0;
      v24 = sub_745F50(a1, a2, v5);
      if ( (dword_2CAA5CC & 0x20) == 0 )
      {
LABEL_6:
        v22 = sub_750E60(&v24, &v22);
        v11 = dword_2CAA5CC & 0x20;
        goto LABEL_9;
      }
      v11 = 32;
      goto LABEL_9;
    }
  }
  v24 = sub_744580(a1, a2, v5, a4);
  sub_750B70(&v22, &v24);
  ++qword_2CAA5C0;
  v24 = 0;
  v23 = 0;
  v19 = sub_7460D0(&v23, 0, &v24, 1);
  if ( (dword_2CAA5CC & 0x200) == 0 )
    v21 = v19;
  if ( (v7 & 4) != 0 )
  {
    v24 = sub_745F50(&v23, (unsigned int)dword_2CAA5CC, v20);
    if ( (dword_2CAA5CC & 0x20) == 0 )
    {
      if ( (_WORD)v24 )
        sub_74F860(&v24, 32);
      v10 = 2;
      goto LABEL_6;
    }
    v10 = 2;
    v11 = 32;
  }
  else
  {
    v11 = dword_2CAA5CC & 0x20;
    v10 = 2;
  }
LABEL_9:
  v12 = &v24;
  v24 = sub_742EF0(0, (v11 >> 5) ^ 1);
  v13 = sub_750E60(&v24, &v22);
  v14 = *(_WORD *)a1 == 0;
  v22 = v13;
  if ( !v14 )
  {
    v12 = (unsigned int *)&v22;
    sub_752830(&v22);
  }
  v15 = (_DWORD *)sub_74E510(v12, &v22);
  *v15 = 0;
  v16 = v15;
  if ( *qword_2CAA5C0 == 64 )
  {
    ++qword_2CAA5C0;
    sub_74F3B0(&v24, v15);
    v17 = v24;
  }
  else
  {
    v17 = sub_7466D0(v15);
  }
  v23 = sub_746790(0);
  v24 = sub_752830(&v23);
  sub_7506B0(&v22, &v24);
  if ( v10 && (dword_2CAA5CC & 0x200) == 0 )
    sub_7506B0(&v22, &v21);
  v24 = sub_7469C0();
  if ( (dword_2CAA5CC & 0x800) == 0 )
    sub_7506B0(&v22, &v24);
  *v16 = v22;
  return v17;
}

