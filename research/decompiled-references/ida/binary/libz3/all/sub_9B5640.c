_QWORD *__fastcall sub_9B5640(__int64 a1, __int64 a2, int a3, _QWORD *a4, _QWORD *a5, _BYTE *a6)
{
  _QWORD *v8; // rbx
  __int64 v9; // r13
  unsigned int v10; // eax
  void *v12; // rdi
  bool v13; // al
  __int64 v14; // [rsp+0h] [rbp-58h]
  _QWORD *v16; // [rsp+10h] [rbp-48h]

  *a6 = 0;
  if ( a5 != a4 )
  {
    v16 = a5;
    v14 = a2 + 120;
    v8 = a4;
    while ( 1 )
    {
      v9 = *v8;
      if ( a2 == *v8 || (*(_BYTE *)(v9 + 216) & 3) != a3 )
        goto LABEL_3;
      *a6 = 1;
      if ( (*(_BYTE *)(a2 + 140) & 1) != 0
        || *(_DWORD *)(a2 + 136) != 1
        || (*(_BYTE *)(v9 + 140) & 1) != 0
        || *(_DWORD *)(v9 + 136) != 1 )
      {
        LOBYTE(v10) = sub_1848D40(qword_1C7F2C0, v14, v9 + 120);
      }
      else if ( (*(_BYTE *)(a2 + 124) & 1) != 0 || (*(_BYTE *)(v9 + 124) & 1) != 0 )
      {
        v10 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v14, v9 + 120) >> 31;
      }
      else
      {
        LOBYTE(v10) = *(_DWORD *)(a2 + 120) < *(_DWORD *)(v9 + 120);
      }
      if ( (_BYTE)v10 )
        return v16;
      v12 = qword_1C7F2C0;
      if ( (*(_BYTE *)(a2 + 124) & 1) != 0 || (*(_BYTE *)(v9 + 124) & 1) != 0 )
      {
        v12 = qword_1C7F2C0;
        if ( !(unsigned int)sub_182C7B0(qword_1C7F2C0, v14, v9 + 120) )
        {
LABEL_14:
          if ( (*(_BYTE *)(a2 + 140) & 1) != 0 || (*(_BYTE *)(v9 + 140) & 1) != 0 )
            v13 = (unsigned int)sub_182C7B0(v12, a2 + 136, v9 + 136) == 0;
          else
            v13 = *(_DWORD *)(a2 + 136) == *(_DWORD *)(v9 + 136);
          if ( v13 && sub_927C80(a2 + 152, v9 + 152) )
            return v16;
        }
      }
      else if ( *(_DWORD *)(a2 + 120) == *(_DWORD *)(v9 + 120) )
      {
        goto LABEL_14;
      }
      v16 = v8;
LABEL_3:
      if ( a5 == ++v8 )
        return v16;
    }
  }
  return a5;
}

