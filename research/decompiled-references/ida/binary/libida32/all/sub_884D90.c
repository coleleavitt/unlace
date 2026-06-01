unsigned __int64 __fastcall sub_884D90(int *a1, int *a2)
{
  __int16 v3; // cx
  int v5; // esi
  int v6; // esi
  int v7; // ecx
  int v8; // edi
  int v9; // esi
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rcx
  unsigned __int64 v15; // [rsp+8h] [rbp-10h]

  v3 = *((_WORD *)a1 + 2);
  v15 = __readfsqword(0x28u);
  v5 = *a1;
  *a1 = *a2;
  *((_WORD *)a1 + 2) = *((_WORD *)a2 + 2);
  *a2 = v5;
  v6 = a2[2];
  *((_WORD *)a2 + 2) = v3;
  v7 = a1[2];
  a1[2] = v6;
  v8 = a2[3];
  a2[2] = v7;
  v9 = a1[3];
  LOWORD(v7) = *((_WORD *)a1 + 8);
  a1[3] = v8;
  *((_WORD *)a1 + 8) = *((_WORD *)a2 + 8);
  a2[3] = v9;
  v10 = *((_QWORD *)a2 + 3);
  *((_WORD *)a2 + 8) = v7;
  v11 = *((_QWORD *)a1 + 3);
  *((_QWORD *)a1 + 3) = v10;
  v12 = *((_QWORD *)a2 + 4);
  *((_QWORD *)a2 + 3) = v11;
  v13 = *((_QWORD *)a1 + 4);
  *((_QWORD *)a1 + 4) = v12;
  *((_QWORD *)a2 + 4) = v13;
  return v15 - __readfsqword(0x28u);
}

