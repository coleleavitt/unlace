__int64 __fastcall get_next_cref_from(unsigned int a1, unsigned int a2)
{
  __int64 v2; // rdx
  __int64 v3; // rbp
  __int64 v4; // rdi
  char v5; // al
  __int64 result; // rax
  int v7; // eax
  unsigned int v8; // [rsp+Ch] [rbp-2Ch]
  unsigned int v9; // [rsp+10h] [rbp-28h] BYREF
  char v10; // [rsp+14h] [rbp-24h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v2 = a1;
  v9 = a2;
  v3 = qword_2CA1698;
  v4 = *(_QWORD *)(qword_2CA1698 + 1480);
  v5 = *(_BYTE *)(v4 + 2232);
  v10 = v5;
  if ( (unsigned int)v2 < a2
    && a2 - (unsigned int)v2 <= 0x3F
    && v5 == 21
    && (v8 = v2, v7 = sub_3BCF60(v4, v2), v2 = v8, a2 == v7) )
  {
    sub_3DC190((_QWORD *)v4, (__int64)&v9, v8);
  }
  else
  {
    sub_3DC350((_QWORD *)v4, &v9, v2);
  }
  result = v9;
  if ( v9 != -1 )
    *(_BYTE *)(*(_QWORD *)(v3 + 1480) + 2232LL) = v10;
  return result;
}

