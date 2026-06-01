__int64 __fastcall sub_336930(QT::QObject **a1, double a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  sub_5392E0(a1, 0, 1);
  v2 = sub_534430("xref_graph:ShowXrefGraphTo");
  if ( v2 )
    sub_336830(a1, *(QT::QAction **)(v2 + 192), "Xrefs graph to...", nullptr, a2);
  result = sub_534430("xref_graph:ShowXrefGraphFrom");
  if ( result )
    return sub_336830(a1, *(QT::QAction **)(result + 192), "Xrefs graph from...", nullptr, a2);
  return result;
}
